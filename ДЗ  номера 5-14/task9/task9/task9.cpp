#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
void degreeof2() {
    int number;
    std::cout << "Enter your number: ";
    std::cin >> number;
    int degree = 1;
    while (degree <= number) {
        std::cout << degree << ' ';
        degree *= 2;
    }
}

int main()
{
    degreeof2();
}