//
// Created by sasha on 17.01.2024.
//Написать программу, в которой вводятся переменные:
// ‘a’ = [A]; ‘b’ = [B] и ‘c’ = [C].
// Необходимо вывести значения данных переменных на консоль раздельно
// (при помощи управляющей конструкции ‘\n’).

#include <iostream>
#include <string>

int main() {
    char a{ 'A' };
    char b{ 'B' };
    char c{ 'C' };

    std::cout << "Peremennya a: " << +a << "\n";
    std::cout << "Peremennya b: " << +b << "\n";
    std::cout << "Peremennya c: " << +c << "\n";

    return 0;

}