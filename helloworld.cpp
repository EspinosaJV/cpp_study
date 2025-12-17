#include <iostream>
using namespace std;

int add(int a, int b){ // function 1
    cout << "This is function 1!" << endl;
    return a + b;
}

double add(double a, double b){ // function 2
    cout << "This is function 2!" << endl;
    return a + b;
}

int add(int a, int b, int c){ // function 3
    cout << "This is function 3!" << endl;
    return a + b + c;
}

double add(int a, double b){ // function 4
    cout << "This is function 4!" << endl;
    return a + b;
}

double add(double a, int b){ // function 5
    cout << "This is function 5!" << endl;
    return a + b;
}

int main(){
    cout << "addition is: " << add(1,2) << endl; // function 1
    cout << "addition is: " << add(3.5, 4.5) << endl; // function 2
    cout << "addition is: " << add(3, 4, 5) << endl; // function 3
    cout << "addition is: " << add(3, 4.5) << endl; // function 4
    cout << "addition is: " << add(3.5, 4) << endl; // function 5

    return 0;
}