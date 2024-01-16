//
// Created by sasha on 16.01.2024.
// Написать программу, в которой задается массив ‘q’ с 3 элементами.
// Необходимо найти минимальный элемент в данном массиве и вывести его на экран.

#include <iostream>

int main() {
    int q[3]; // объявляем массив 'q' из трех элементов
    int low=37767;
    int lowi=0;
    std::cout << "Enter 3 number by space: ";
    for (int i = 0; i < 3; i++) {
        std::cin >> q[i]; // заполняем массив 'a' с клавиатуры
    }


    for (int i = 0; i < 3; i++) {
        if  (q[i] < low) {low = q[i] ; lowi=i+;}
        else {low = low;};
    }
        std::cout << "Low element q[" << lowi <<"]=" << low;

    return 0;
}