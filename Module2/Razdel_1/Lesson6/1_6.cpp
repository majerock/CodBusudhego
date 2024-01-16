//
// Created by sasha on 16.01.2024.
//

#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int w[] = {18, 11, 23, 8};
    int n = sizeof(w) / sizeof(w[0]);

    std::cout << "Original: ";
    for (int i = 0; i < n; i++) {
        std::cout << w[i] << " ";
    }
    std::cout<<std::endl;

    bubbleSort(w, n);

    std::cout << "After buble Sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << w[i] << " ";
    }

    return 0;
}