#include <iostream>
#include <cstring>
#include <vector>

//so we don't need to type std:: all the time
using namespace std;

//Attendance class
class Attendance {
private:
    //the string that the user will enter (P's, L's, and A's)
    string attendance;

    //check if absent
    bool isAbsent() {
        //creates a variable to count the absences
        int count = 0;

        //adds an absence for every A in the string
        for (int i = 0; attendance[i] != '\0'; i++) {
            if (attendance[i] == 'A') {
                count++;
            }
        }

        //if there are two or more absences, return true
        if (count >= 2) {
            return true;
        } else {
            return false;
        }
    }

    //check if late
    bool isLate() {
        //creates a vector to store each day's tardies
        vector<int> count;

        //adds a 1 for every L and 0 for anything else
        for (int i = 0; attendance[i] != '\0'; i++) {
            if (attendance[i] == 'L') {
                count.push_back(1);
            } else {
                count.push_back(0);
            }
        }

        //if there are three or more consecutive tardies, return true
        for (int i = 0; i < count.size(); i++) {
            if (count.at(i) == 1 && count.at(i + 1) == 1 && count.at(i + 2) == 1) {
                return true;
            }
        }
        
        //else, return false
        return false;
    }
public:
    //determines if student passed or failed
    bool checkAttendance() {
        //returns true if not late or absent
        if (isAbsent() == false && isLate() == false) {
            return true;
        }
        //returns false otherwise
        return false;
    }

    //user-defined constructor
    Attendance (const string& attd) {
        attendance = attd;
        return;
    }
};

int main() {   
    //create two objects using the constructor
    Attendance attd1("PPALLP");
    Attendance attd2("PPALLL");

    //check attendance 1
    (attd1.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;
    //check attendance 2
    (attd2.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";

    return 0;
}
/*
    NOTE: The professor has a better way to do isAbsent and isLate

    bool isAbsent() {
        int count = 0;
        for (char c : attendance) {
            if (c == 'A') {
                count++;
            }
            if (count > 1) {
                return true;
            }
        }
        return false
    }

    //^^^ pay attention to (char c : attendance) - that means it checks every character inside the string attendance

    bool isLate() {
        return (attendance.find("LLL"));
    }

    //^^^ uses a find sequence found in the string class (#include <string>)

    NOTE: He also found an easier way to do checkAttendance

    bool checkAttendance() {
        return (!isLate() && !isAbsent());
    }

    //^^^ will return true if both are false, and false if either is true (somehow)
*/