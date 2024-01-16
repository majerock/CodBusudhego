//
// Created by sasha on 16.01.2024.
// Написать программу, в которой создается массив с именем ‘arr’ и размерами 4х5 (4 строки и 5 столбцов).
// Данный массив заполняется внутри программы случайными числами. Вывести данный массив на консоль.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int arr[4][5]; // объявляем массив 'arr' 4х5

    for(int y = 0; y < 4; y++) {
        for(int i = 0; i < 5; i++) {
            arr[y][i]=rand(); // заполняем массив 'arr'
        }}

    std::cout << "Massive 'arr':" << std::endl ;
    for(int y = 0; y < 4; y++) {
        for(int i = 0; i < 5; i++) {
            std::cout << arr[y][i] << " "; // выводим массив 'arr' на консоль
        } std:: cout << std::endl;
    }
    return 0;

}