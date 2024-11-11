#include <iostream>

int main() {
    // Pattern A
    std::cout << "Pattern A:\n";
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "+";
        }
        std::cout << "\n";
    }

    // Pattern B
    std::cout << "\nPattern B:\n";
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "+";
        }
        std::cout << "\n";
    }

    return 0;
}
