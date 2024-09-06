#include <iostream>

//template
template<typename T>
T largest(T v1, T v2, T v3) {
    if (v1 > v2 && v1 > v3) {
        return v1;
    } else if (v2 > v1 && v2 > v3) {
        return v2;
    } else if (v3 > v1 && v3 > v2) {
        return v3;
    } else {
        return 0;
    }
}

int main() {
    //variables
    int i1 = 10, i2 = 15, i3 = 75;
    double d1 = 10.4, d2 = 10.6, d3 = 10.5;

    //largest function
    std::cout << largest(i1, i2, i3) << std::endl;
    std::cout << largest (d1, d2, d3) << std::endl;

    return 0;
}