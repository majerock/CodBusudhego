//
// Created by sasha on 13.03.2024.
// Написать программу, в которой инициализируется массив int b[2],
// а также переменные ‘q’ и ‘w’ с типом данных int.
// Необходимо поместить случайные целочисленные значения в переменные ‘q’ и ‘w’,
// после чего поместить данные значения в ячейки массива ‘b’.
// На консоль необходимо вывести значения ячеек массива ‘b’.

#include <iostream>

int main() {
    int b[2];
    int q , w;
    srand(time(0));
    q = rand();
    w = rand();
    b[1] =q;
    b[2] =w;
    std::cout << q << " " << w ;
}