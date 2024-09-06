#include <iostream>

int* doubleArray(int* arr, int size);
int* doubleNewArray(const int* arr, int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* newArray = doubleNewArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        std::cout << newArray[i] << ' ';
    }

    //frees the heap memory
    delete [] newArray;
    
    return 0;
}

int* doubleArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
}

int* doubleNewArray(const int* arr, int size) {
    //heap
    int* newArray = new int[size];

    for (int i = 0; i < size; i++) {
        newArray[i] = 2 * arr[i];
    }

    return newArray;
}