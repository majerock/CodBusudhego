//
// Created by sasha on 28.01.2024.
//Написать программу, в которой используются переменные ‘a’, ‘b’ и ‘с’ с логическим типом данных bool.
//Необходимо проинициализировать данные переменные, поместить произвольные значения и вывести эти значения на консоль.

#include <iostream>

int main() {
    bool a, b, c;
    std::cout << "Enter a:";
    std::cin >> a;
    std::cout << "Enter b:";
    std::cin >> b;
    std::cout << "Enter c:";
    std::cin >> c;

    std::cout << "Peremennya a: " << a << "\n";
    std::cout << "Peremennya b: " << b << "\n";
    std::cout << "Peremennya c: " << c << "\n";

    return 0;
}