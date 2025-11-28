#include <iostream>

int main() {
    int weeks = 3;
    int daysInWeek = 7;

    for (int i = 1; i <= weeks; i++){
        std::cout << "Week: " << i << std::endl;

        for (int j = 1; j <= daysInWeek; j++){
            // continue if the day is an odd number
            if (j % 2 != 0) {
                continue;
            }
            std::cout << "Day: " << j << std::endl;
        }
    }
}