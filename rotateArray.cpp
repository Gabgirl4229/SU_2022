#include <iostream>
#include <vector>


void rotateLeft(int arr[], int size, int k);
void rotateRight(int arr[], int size, int k);

void rotateVector(std::vector<int> intVector, int size, int k);//uh??

int main() {
    const int SIZE = 7;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};

    rotateLeft(list, SIZE, 3);

    for (int i = 0; i < SIZE; i++) {
        std::cout << list[i] << ' ';
    }
}

void rotateLeft(int arr[], int size, int k) {
    int n = 0;
    while (n < k) {        
        int temp1 = arr[0];
/*
        //our original version
        for (int i = 1; i < size - 1; i++) {
            int temp2 = arr[i];
            arr[i] = arr[i+1];
            arr[i-1] = temp2;
        }
*/
        //better version
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i+1];
        }
        arr[size-1] = temp1;
        n++;
    }
    return;
}

void rotateRight(int arr[], int size, int k) {
    int n = 0;
    while (n < k) {       
        int temp1 = arr[size - 1];

        for (int i = size - 2; i > 0; i--) {
            arr[i] = arr[i-1];
        }

        arr[0] = temp1;
        n++;
    }
    return;
}

