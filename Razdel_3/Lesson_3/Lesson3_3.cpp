//
// Created by sasha on 28.11.2023.
//Предположим, что вы хотите написать программу для печати таблицы умножения от 1 до n.
// Создайте программу, которая выводит таблицу умножения в следующем формате:
//
//Ввод:
//10
//Вывод:
//1 2 3 4 5 6 7 8 9 10
//2 4 6 8 10 12 14 16 18 20
//3 6 9 12 15 18 21 24 27 30 ...
//10 20 30 40 50 60 70 80 90 100

#include <iostream>

int main () {
    int a;
    std::cin >> a;
    std::cout << " " << std::endl;

    for (int i=1; i<(a+1); i++) {
        for (int i2=1; i2<11; i2++) {
            std::cout << i*i2 << " ";
        }
        std::cout << " " << std::endl;
        }
    }
