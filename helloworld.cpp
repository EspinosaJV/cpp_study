#include <iostream>

void foo(){ // no longer inside of main()
    std::cout << "foo!\n";
}

int main(){
    foo();

    return 0;
}