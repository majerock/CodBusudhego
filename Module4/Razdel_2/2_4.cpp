//
// Created by sasha on 22.04.2024.
//Написать программу, в которой инициализируются переменная ‘q’ (с типом данных float) и конструкция  на данный тип данных.
// В переменную ‘q’ записывается значение 7.13.
// На консоль необходимо вывести утроенное значение данной переменной.

#include <iostream>

int main() {
    float q = 7.13;

    q *= 3;

    std::cout << "3 * q: " << q << std::endl;

    return 0;
}
