#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
std::string form_dna() {
    std::string dna, dna2;
    std::cout << "Enter dna: ";
    std::cin >> dna;
    for (int i = 0; i < dna.size(); i++) {
        switch (dna[i]) {
        case 'A':
            dna2 += 'T';
            break;
        case 'T':
            dna2 += 'A';
            break;
        case 'C':
            dna2 += 'G';
            break;
        case 'G':
            dna2 += 'C';
            break;
        default:
            return "Invalid value";
        }
    }
    return dna2;
}
int main()
{
    std::cout << form_dna();
}
