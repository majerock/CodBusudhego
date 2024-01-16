//
// Created by sasha on 16.01.2024.
//Написать программу, в которой с клавиатуры вводится массив чисел с именем ‘с’ и 10 элементами. Вывести данный массив на консоль.

#include <iostream>

int main() {
    int c[10];

    std::cout << "Enter 10 number by space: ";
    for(int i = 0; i < 10; i++) {
        std::cin >> c[i];
    }

    std::cout << "Massive 'c': ";
    for(int i = 0; i < 10; i++) {
        std::cout << c[i] << " ";
    }

    return 0;
}
