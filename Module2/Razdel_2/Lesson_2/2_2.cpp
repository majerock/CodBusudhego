//
// Created by sasha on 28.01.2024.
//Написать программу, в которой используются переменные ‘c’, ‘d’ и ‘sum’ с типом данных short.
// Необходимо проинициализировать данные переменные, поместить произвольные значения в переменные ‘c’ и ‘d’,
// после чего сложить данные значения и поместить сумму в переменную с именем ‘sum’.
// На консоль вывести как значения переменных ‘c’ и ‘d’, так и сумму.

#include <iostream>

int main() {
    short c, d, sum;
    std::cout << "Enter c:";
    std::cin >> c;
    std::cout << "Enter d:";
    std::cin >> d;
    sum=c+d;

    std::cout << "Peremennya c: " << c << "\n";
    std::cout << "Peremennya d: " << d << "\n";
    std::cout << "Peremennya sum: " << sum << "\n";

    return 0;

}