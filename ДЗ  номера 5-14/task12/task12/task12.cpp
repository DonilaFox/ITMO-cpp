#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
int sum_of_div8() {
    int amount, sum = 0;
    std::vector<int> numbers{};
    std::cout << "Enter your amount of numbers: ";
    std::cin >> amount;
    std::cout << "Enter your numbers: ";
    for (int i = 0; i < amount; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
        if (number % 8 == 0 and number < 100 and number > 9) sum += number;
    }
    return sum;
}
int main()
{
    std::cout << sum_of_div8();
}