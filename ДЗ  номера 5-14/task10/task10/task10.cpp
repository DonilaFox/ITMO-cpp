#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
int find_max() {
    int amount, max;
    std::vector<int> numbers{};
    std::cout << "Enter your amount of numbers: ";
    std::cin >> amount;
    std::cout << "Enter your numbers: ";
    std::cin >> max;
    numbers.push_back(max);
    for (int i = 0; i < amount-1; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
        if (number > max) max = number;
    }
    return max;
}
int main()
{
    std::cout << find_max();
}