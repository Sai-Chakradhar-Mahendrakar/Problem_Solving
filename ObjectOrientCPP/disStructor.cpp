// #include <bits/stdc++.h>
// using namespace std;

// class Car{
//     public:
//         ~Car(){
//             cout<<"Killed"<<endl;
//         }
//         int fun(){
//             return 1;
//         }
// };

// int main(){
//     Car c;
//     cout<<c.fun();
// }

// #include <iostream>

// class MyClass {
// public:
//     MyClass() {
//         std::cout << "Constructor called." << std::endl;
//     }
//     ~MyClass() {
//         std::cout << "Destructor called." << std::endl;
//     }
// };

// int main() {
//     MyClass obj; // Constructor called.
//     // Destructor will be called automatically when obj goes out of scope
//     return 0;
// }

// #include <iostream>

// class DynamicArray {
// private:
//     int* array;
//     int size;

// public:
//     DynamicArray(int s) : size(s) {
//         array = new int[size];
//         std::cout << "DynamicArray of size " << size << " created." << std::endl;
//     }

//     ~DynamicArray() {
//         delete[] array; // Release the allocated memory
//         std::cout << "DynamicArray destroyed and memory released." << std::endl;
//     }

//     void setValue(int index, int value) {
//         if (index >= 0 && index < size) {
//             array[index] = value;
//         }
//     }

//     int getValue(int index) const {
//         if (index >= 0 && index < size) {
//             return array[index];
//         }
//         return -1; // Indicate error
//     }
// };

// int main() {
//     DynamicArray arr(5);
//     arr.setValue(0, 10);
//     arr.setValue(1, 20);
//     std::cout << "Value at index 0: " << arr.getValue(0) << std::endl;
//     std::cout << "Value at index 1: " << arr.getValue(1) << std::endl;
//     // Destructor will be called automatically when arr goes out of scope
//     return 0;
// }

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }
    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }
    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    Base* ptr = new Derived(); // Base constructor, then Derived constructor called
    delete ptr; // Derived destructor, then Base destructor called
    return 0;
}

