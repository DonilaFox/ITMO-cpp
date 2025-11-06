#include <vector>
#include <iostream>
#include <algorithm>
int divisible7() {
    std::cout << "Enter your numbers: ";
    int a, b;
    std::cin >> a >> b;
    if (b < a) return -1;
    int number_div_7 = -1;
    for (int i = b; i >= a; i--) {
        if (i % 7 == 0) {
            number_div_7 = i;
            break;
        }
    }
    return number_div_7;
}
int main()
{
    std::cout << divisible7();
}
