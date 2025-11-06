#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
int count_of_max() {
    int count=0, number;
    std::vector<int> numbers{};
    std::cout << "Enter your numbers: ";
    std::cin >> number;
    int max = number;
    while (number != 0) {
        numbers.push_back(number);
        std::cin >> number;
        if (number > max) max = number;
    }
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == max) count++;
    }
    return count;
}
int main()
{
    std::cout << count_of_max();
}