//
// Created by sasha on 16.01.2024.
// Написать программу, в которой с клавиатуры вводится двумерный массив ‘arr[2][2]’. Вывести на консоль только вторую строку данного массива.
#include <iostream>

int main() {
    int a[2][2]; // объявляем массив 'a' из трех элементов

    std::cout << "Enter first line number, after second line by space in ONE string: ";
    for(int y = 0; y < 2; y++) {
    for(int i = 0; i < 2; i++) {
        std::cin >> a[y][i]; // заполняем массив 'a' с клавиатуры
    }}

    std::cout << "Second line 'a': " << a[1][0] << " " <<a[1][1];

    return 0;
}