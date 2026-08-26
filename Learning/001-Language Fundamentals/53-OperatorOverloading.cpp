#include <iostream>

    // operator overloading:
    // making an operator do a different set of work for a particular class or variable.



class Numbers {
    int* data;

public:

    Numbers(int value) {
        data = new int(value);
    }

    // Copy constructor
    Numbers(const Numbers& a) {
        data = new int(*a.data);
    }

    // Move constructor
    Numbers(Numbers&& a) {
        data = a.data;
        a.data = nullptr;
    }

    // Move assignment operator ("=" operator overloading).
    Numbers& operator=(Numbers&& a) {
        delete data;
        data = a.data;
        a.data = nullptr;

        return *this;
    }

    // Copy assignment operator ("=" operator overloading).
    Numbers& operator=(const Numbers& a) {
        delete data;
        data = new int(*a.data);

        return *this;
    }

    // Destructor
    ~Numbers() {
        delete data;
    }
};