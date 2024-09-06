#ifndef MYSET_H
#define MYSET_H

class MySet {
private:
    //data fields
    unsigned int range;
    int size;
    bool* set;

public:
    //user-defined constructor
    MySet(unsigned int range);

    //copy constructor
    MySet(const MySet& object);

    //destructor
    ~MySet();

    //class methoda
    void insertElement(int k);
    void deleteElement(int m);

    void printSet() const;
    bool isEqualTo(const MySet& object) const;
};

#endif