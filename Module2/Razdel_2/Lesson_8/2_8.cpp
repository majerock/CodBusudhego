//
// Created by sasha on 28.01.2024.
//Написать программу, в которой вводятся переменные: ‘q’ = [Q]; ‘w’ = [W] и ‘e’ = [63].
// Необходимо вывести значения данных переменных на консоль раздельно (при помощи управляющей конструкции ‘\n’).

#include <iostream>

int main() {
    char q{ 'Q' };
    char w{ 'W' };
    char e{63};

    std::cout << "Peremennya q: " << +q << "\n";
    std::cout << "Peremennya w: " << +w << "\n";
    std::cout << "Peremennya e: " << +e << "\n";

    return 0;

}