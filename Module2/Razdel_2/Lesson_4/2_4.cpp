//
// Created by sasha on 28.01.2024.
//Написать программу, в которой вводится переменная ‘a’ с типом данных char.
// Необходимо записать значение ‘qwerty’ в данную переменную и вывести на экран.

#include <iostream>

int main() {
    char a[6]= { 'q' ,'w','e','r','t','y' };
    std::cout << "char 'a': ";
    for(int i = 0; i < 6; i++) {
        std::cout << a[i] ;
    }
    return 0;
}