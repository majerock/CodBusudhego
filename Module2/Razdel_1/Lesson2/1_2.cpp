//
// Created by sasha on 16.01.2024.
//Написать программу, в которой заполняется двумерный массив ‘arr[3][3]’ случайными числами. Вывести данный массив на консоль.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int arr[3][3]; // объявляем массив 'arr' 3 на 3

    for(int y = 0; y < 3; y++) {
    for(int i = 0; i < 3; i++) {
        arr[i][y]=rand(); // заполняем массив 'arr'
    }}

    std::cout << "Massive 'arr':" << std::endl ;
    for(int y = 0; y < 3; y++) {
    for(int i = 0; i < 3; i++) {
        std::cout << arr[i][y] << " "; // выводим массив 'arr' на консоль
    } std:: cout << std::endl;
    }
    return 0;

}