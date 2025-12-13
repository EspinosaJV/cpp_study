#include <iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout << "This is the function of the base class" << endl;
        }
};

class Child: public Base{
    public:
        void print(){
            cout << "This is the function of the child class or the derived class" << endl;
        }
};

int main(){
    Base* b;
    Child c;

    b = &c;
    b -> print();

    return 0;
}