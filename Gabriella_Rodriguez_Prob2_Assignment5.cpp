#include <iostream>

//template
template <typename T>

//isGreater function
bool isGreater(const T list1[], const T list2[], int size1, int size2) {

    //set a default value
    bool isGreater = false;

    //for every item in list1...
    for (int i = 0; i < size1; i++) {
        //check every item in list2...
        for (int j = 0; j < size2; j++) {
            //breaks out of the inner "for" loop if any item in list2 is not greater than a value in list1
            if (list2[j] <= list1[i]) {
                isGreater = false;
                break;
            } else {
                isGreater = true;
            }
        }

        //isGreater will only leave the inner "for" loop as false if the loop is ended prematurely
        if (isGreater == false) {
            //so if isGreater is false, immediately return false
            return false;
        } else {
            return true;
        }
    }
}

int main() {
    //int arrays (should return false since 1 < 6)
    int arr1[4] = {6, 2, 8, 4};
    int arr2[6] = {1, 7, 3, 9, 12, 14};

    std::cout << isGreater(arr1, arr2, 4, 6) << std::endl;

    //double arrays (should return true)
    double arr3[3] = {2.5, 1.4, 1.8};
    double arr4[7] = {8.5, 3.1, 2.8, 9.1, 3.0, 8.0, 5.1};
    
    std::cout << isGreater(arr3, arr4, 3, 7) << std::endl;

    //string arrays (should return false becasue h < u and t < u)
    std::string arr5[4] = {"unus", "annus", "memento", "mori"};
    std::string arr6[2] = {"heehoo", "the gongoozler"};

    std::cout << isGreater(arr5, arr6, 4, 2) << std::endl;
}