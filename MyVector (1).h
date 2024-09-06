#ifndef MYVECTOR_H
#define MYVECTOR_H

//template
template <typename T>

class MyVector {
private:
    //data fields
    T* elements; //changed int* to T*
    unsigned vectorCapacity, vectorSize;

public:
    //user-defined constructor
    MyVector(int nElements = 0);

    //copy constructor
    MyVector(const MyVector& other);

    //destructor
    ~MyVector();

    //class methodds
    void print();
    void push_back(T value); //changed int to T
    T pop_back(); //new function
};

#endif