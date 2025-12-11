#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int d = 7;
    int e = 5;
    std::vector <int> v{2, 3, 7, 14, 23};
    std::for_each(v.begin(), v.end(), [&](int x){
        if(x % d == 0){
            std::cout << x << " is divisible by " << d << "\n";
        } else {
            std::cout << x << " is not divisible by " << d << "\n";
        }
        d = 10;
        e = 19;
        std::cout << d << " is the new d value" << "\n";
        std::cout << e << " is the new e value" << "\n";
    });

    system("pause>nul");
    return 0;
}