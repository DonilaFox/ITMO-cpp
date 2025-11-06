#include <vector>
#include <iostream>
#include <algorithm>
int count_of_min() {
    std::vector<int> numbers{};
    int amount;
    std::cout << "Enter your amount of numbers: ";
    std::cin >> amount;
    std::cout << "Enter your numbers: ";
    for (int i = 0; i < amount; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
    }
    auto min_elem = std::min_element(numbers.begin(), numbers.end());
    int count = 0;
    for (int i = 0; i < amount; i++) {
        if (numbers[i] == *min_elem) {
            count++;
        }
    }
    return count;
}
int main()
{
    std::cout << count_of_min();
}