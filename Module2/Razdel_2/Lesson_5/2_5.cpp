//
// Created by sasha on 28.01.2024.
// Написать программу, в которой вводятся переменные: ‘a’, ‘b’, ‘c’, и ‘d’ с типом данных int.
// В переменную ‘a’ и ‘b’ вводятся произвольные значения.
// В переменную ‘c’ ввести значение a + 3, а в переменную ‘d’ значение 200 / b.
// Вывести значения всех переменных на консоль.

#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "Enter a:";
    std::cin >> a;
    std::cout << "Enter b:";
    std::cin >> b;
    c=a-3;
    d=200/b;

    std::cout << "Peremennya a: " << a << "\n";
    std::cout << "Peremennya b: " << b << "\n";
    std::cout << "Peremennya c: " << c << "\n";
    std::cout << "Peremennya d: " << d << "\n";

    return 0;
}