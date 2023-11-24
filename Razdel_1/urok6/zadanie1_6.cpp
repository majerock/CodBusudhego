//
// Created by sasha on 25.11.2023.
// Напишите программу, которая принимает число от пользователя и выводит сообщение,
// указывающее, является ли число четным или нечетным.
//Пример входных данных: 6
//Соответствующий выход: "6 - четное число"

#include <iostream>
#include <cmath>

int main() {
    int a;
    std::cout << "Vvedite TSELOE chislo:" ;
    std::cin >> a;
    if (a%2==0) std::cout<< "chetnoye";
    else std::cout<< "NEchetnoye";
}