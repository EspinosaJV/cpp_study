#include <iostream>
using namespace std;

int main(){

    // lambda function with no capture, parameters, or return type
    // auto printHello = []() {
    //     std::cout << "Hello, World!\n";
    // };
    // printHello();

    // lambda function with parameters
    // auto add = [](int a, int b){
    //     return a + b;
    // };
    // int result = add(3, 4);
    // cout << result << endl;

    // lambda function with capture-by-value
    // int multiplier = 3;
    // auto times = [multiplier](int a){
    //     return a * multiplier;
    // };
    // int result = times(5);
    // cout << result << endl;

    // lambda function with capture-by-reference
    // int expiresInDays = 45;
    // auto updateDays = [&expiresInDays](int newDays){
    //     expiresInDays = newDays;
    // };
    // updateDays(30);

    return 0;
}