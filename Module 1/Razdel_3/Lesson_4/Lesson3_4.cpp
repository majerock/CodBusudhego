//
// Created by sasha on 28.11.2023.
//Дано натуральное число. Напишите программу, которая определяет, состоит ли указанное число из одинаковых цифр.
//Формат входных данных
//На вход программе подается одно натуральное число.
//Формат выходных данных
//Программа должна вывести «YES» если число состоит из одинаковых цифр и «NO» в противном случае.

#include <iostream>

int main () {
    int a,b,d=0;
    std::cin >> a;
    d=a%10;
    a=a/10;
    while (a!=0) {
        if (d==a%10) a=a/10;
        else break;
    }
    a==0 ? std::cout << "YES" : std::cout << "NO" ;

}