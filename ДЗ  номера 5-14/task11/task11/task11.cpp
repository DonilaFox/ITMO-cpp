#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
int count_of_positive() {
    int amount, count=0;
    std::vector<int> numbers{};
    std::cout << "Enter your amount of numbers: ";
    std::cin >> amount;
    std::cout << "Enter your numbers: ";
    for (int i = 0; i < amount; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
        if (number > 0) count++;
    }
    return count;
}
int main()
{
    std::cout << count_of_positive();
}