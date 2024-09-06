#include <iostream>

using std::string;

//structure (NOT AN OBJECT)
struct Lecture {
    //attributes
    string title;
    string author;
    int duration;
};

void printLecture(const Lecture& lecture) {
    std::cout << "The title is " << lecture.title << std::endl;
    std::cout << "The author is " << lecture.author << std::endl;
    std::cout << "The duration is " << lecture.duration << " minutes" << std::endl;
    std::cout << std::endl;
}

int main() {
    int a;
    //object
    Lecture lecture;

    lecture.duration = 75;
    lecture.title = "Objects and Classes";
    lecture.author = "Igor Mirsalikhov";

    //std::cout << lecture.title << ": " << lecture.duration << " minutes" << std::endl;
    printLecture(lecture);

    Lecture lecture2;
    
    lecture2.duration = 60;
    lecture2.title = "Triple Integrals";
    lecture2.author = "Unknown";

    printLecture(lecture2);
    
    Lecture lecture3;
    
    lecture3.duration = 120;
    lecture3.title = "Laplace Transforms";
    lecture3.author = "Jared Bunn";

    printLecture(lecture3);

    return 0;
}