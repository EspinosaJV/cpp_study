// TOPIC: Polymorphism in C++!! (Very Important Feature of OOP)

// POINTS:
// There are two types of polymorphism
// A. Compile Time Polymorphism / Static Binding / Early Binding
//      a. Function Overloading
//      b. Operator Overloading
// B. Runtime Polymorphism / Dynamic Binding / Lazy Binding
//      a. Function Overriding (Using virtual functions)

#include <iostream>
using namespace std;

class Base{
    public:
        virtual void fun(int x){
            cout << "Base" << endl;
        }
};

class Derived : public Base{
    public:
        virtual void fun(int x) override{
            cout << "Derived" << endl;
        }
};

int main(){
    Derived d;
    Base &b = d;
    
    b.fun(10);

    return 0; 
}