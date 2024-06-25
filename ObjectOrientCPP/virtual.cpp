// #include <iostream>

// class Base {
// public:
//     virtual void show() {
//         std::cout << "Base class show function." << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show(){ // Override is optional but recommended for clarity
//         std::cout << "Derived class show function." << std::endl;
//     }
// };

// int main() {
//     Base* b;
//     Derived d;
//     b = &d;

//     b->show(); // Calls Derived class show function due to virtual mechanism

//     return 0;
// }

// #include <iostream>

// class Shape {
// public:
//     virtual void draw() = 0; // Pure virtual function
// };

// class Circle : public Shape {
// public:
//     void draw() override {
//         std::cout << "Drawing Circle." << std::endl;
//     }
// };

// class Square : public Shape {
// public:
//     void draw() override {
//         std::cout << "Drawing Square." << std::endl;
//     }
// };

// int main() {
//     Shape* shape1 = new Circle();
//     Shape* shape2 = new Square();

//     shape1->draw(); // Drawing Circle
//     shape2->draw(); // Drawing Square

//     delete shape1;
//     delete shape2;

//     return 0;
// }
// #include <iostream>

// class Base {
// public:
//     Base() {
//         std::cout << "Base Constructor." << std::endl;
//     }
//     virtual ~Base() {
//         std::cout << "Base Destructor." << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         std::cout << "Derived Constructor." << std::endl;
//     }
//     ~Derived() {
//         std::cout << "Derived Destructor." << std::endl;
//     }
// };

// int main() {
//     Base* b = new Derived();
//     delete b; // Properly calls Derived destructor followed by Base destructor

//     return 0;
// }

#include <iostream>
using namespace std;

class A{
    public:
        virtual void call(){
            cout<<"A"<<endl;
        }
};

class B: public A{
    public:
        void call(){
            cout<<"B"<<endl;
        }
};

class C: public B{
    // public:
    //     // void call(){
    //     //     // cout<<"B"<<endl;
    //     // }
};

int main(){
    C c;
    c.call();
}