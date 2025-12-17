#include <iostream>
using namespace std;

class Person{
    public:
        std::string name;
        int age;

        void printInfo(){
            cout << "Name: " << name << ", Age: " << age << '\n';
        };
};

int main(){

    int num = 42;
    float pi = 3.14f;
    double pi_high_precision = 3.1415926535;
    char letter = 'A';
    bool is_cpp_great = true;
    int numbers[5] = {1, 2, 3, 4, 5};
    int scores[10] = {100, 95, 98};
    int allZero[0] = {0};
    int num = 42;
    int* pNum = &num;
    int num = 42;
    int& numRef = num;
    
    // struct Person {
    //     std::string name;
    //     int age;
    //     float height;
    // };

    Person p1;
    p1.name = "John Doe";
    p1.age = 30;

    union Data{
        int num;
        char letter;
        float decimal;
    };

    Data myData;
    myData.num = 42;

    return 0;
}