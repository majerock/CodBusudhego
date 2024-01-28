//
// Created by sasha on 28.01.2024.
//Написать программу, в которой вводятся переменные: ‘a’ = [S], ‘b’ = [B] и ‘c’ = [C].
// Необходимо вывести значения данных переменных на консоль в одну строку (при помощи управляющей конструкции ‘\t’).


#include <iostream>
#include <string>

int main() {
    char a{ 'S' };
    char b{ 'B' };
    char c{ 'C' };

    std::cout << +a << "\t";
    std::cout << +b << "\t";
    std::cout << +c << "\t";

    return 0;

}