//
// Created by sasha on 28.02.2024.
//

#include <iostream>

int main() {
    int n = 20;
    int b = 24;
    int &ref3 = n;
    int &ref4 = b;

    std::cout << "n: " << n << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "*n: " << *(&n) << std::endl;
    std::cout << "*b: " << *(&b) << std::endl;
    std::cout << "ref3: " << ref3 << std::endl;
    std::cout << "ref4: " << ref4 << std::endl;

    return 0;
}