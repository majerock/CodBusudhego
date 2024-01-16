//
// Created by sasha on 16.01.2024.
//Написать программу, в которой с клавиатуры вводится массив чисел с именем ‘a’ и 5 элементами.
// Вывести данный массив на консоль и отдельно вывести только два первых элемента массива.

#include <iostream>

int main() {
    int a[5];

    std::cout << "Enter 5 number by space: ";
    for(int i = 0; i < 5; i++) {
        std::cin >> a[i];
    }
    std::cout << "1 and 2 element 'a': " << a[0] << " " << a[1];

    return 0;
}
