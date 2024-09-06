#include <iostream>

//template
template<typename T>
T getMin(const T arr[], int size) {
    //set a default minimum
    T min = arr[0];

    //compare it to the others
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    //create arrays
    int i_array[4] = {1, 3, -3, 80};
    double d_array[4] = {1.57, 3.14159, -360, 0};
    std::string s_array[4] = {"abcd", "ab", "Adad", "Cat"};

    //print output of getMin function
    std::cout << getMin(i_array, 4) << std::endl;
    std::cout << getMin(d_array, 4) << std::endl;
    std::cout << getMin(s_array, 4) << std::endl;

    return 0;
}