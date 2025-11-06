#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>
void find_digits() {
    int a, b;
    std::cin >> a >> b;

    std::string str_a = std::to_string(a);
    std::string str_b = std::to_string(b);

    std::unordered_set<char> digits_b;
    for (char c : str_b) {
        digits_b.insert(c);
    }

    std::unordered_set<char> printed;

    for (char c : str_a) {
        if (digits_b.count(c) && !printed.count(c)) {
            std::cout << c << " ";
            printed.insert(c);
        }
    }
}
int main()
{
    find_digits();
}