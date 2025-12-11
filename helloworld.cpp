#include <iostream>

// Template function to print ANY type
template<typenameT>
void print(const T& value){
    std::cout << "Printing value: " << value << "\n";
}

int main(){
    print(42);
    print(3.14159);
    print("Hello");

    return 0;
}