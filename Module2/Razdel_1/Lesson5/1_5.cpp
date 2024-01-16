//
// Created by sasha on 16.01.2024.
// Написать программу, в которой вводится массив ‘x’ = [14, 11, 8].
// Применить метод сортировки выбором к данному массиву и расставить элементы массива ‘x’ по возрастанию.
// Вывести исходную последовательность элементов массива и отсортированную.

#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int x[] = {14, 11, 8};
    int n = sizeof(x) / sizeof(x[0]);

    std::cout << "Original: ";
    for (int i = 0; i < n; i++) {
        std::cout << x[i] << " ";
    }
    std::cout<<std::endl;

    selectionSort(x, n);

    std::cout << "After sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << x[i] << " ";
    }

    return 0;
}