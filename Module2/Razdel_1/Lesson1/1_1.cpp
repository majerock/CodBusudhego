//
// Created by sasha on 16.01.2024.
//Написать программу, в которой с клавиатуры вводится массив чисел с именем ‘a’ и тремя элементами. Вывести данный массив на консоль.

#include <iostream>

int main() {
    int a[3]; // объявляем массив 'a' из трех элементов

    std::cout << "Enter 3 number by space: ";
    for(int i = 0; i < 3; i++) {
        std::cin >> a[i]; // заполняем массив 'a' с клавиатуры
    }

    std::cout << "Massive 'a': ";
    for(int i = 0; i < 3; i++) {
        std::cout << a[i] << " "; // выводим массив 'a' на консоль
    }

    return 0;
}