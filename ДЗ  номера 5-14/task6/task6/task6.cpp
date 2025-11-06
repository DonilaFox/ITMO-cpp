#include <vector>
#include <iostream>
#include <algorithm>
int fib_index() {
    std::vector<int> fib_numbers{ 1, 1 };
    int number;
    std::cout << "Enter your number: ";
    std::cin >> number;
    while (fib_numbers.back() < number) {
        fib_numbers.push_back(fib_numbers[fib_numbers.size() - 1] + fib_numbers[fib_numbers.size() - 2]);
    }
    auto ind = std::find(fib_numbers.begin(), fib_numbers.end(), number);

    if (ind != fib_numbers.end()) {
        return std::distance(fib_numbers.begin(), ind);
    }
    else {
        return -1;
    }
}
int main()
{
    std::cout << fib_index();
}
