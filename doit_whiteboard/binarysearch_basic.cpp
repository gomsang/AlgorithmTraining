//
// Created by gomsang on 2/27/2020.
//
#include <iostream>

int search(const int array[], int n, int keyword) {
    int left = 0;
    int right = n;
    do {
        int center = (left + right) / 2;
        if (keyword == array[center]) {
            return center;
        } else if (keyword < array[center]) {
            right = center - 1;
        } else {
            left = center + 1;
        }
    } while (left <= right);
}

int main(void) {
    int array[] = {1, 2, 4, 5, 6, 7, 11, 13, 15, 19};
    int n = sizeof(array) / sizeof(int);
    int keyword = 6;

    int result = search(array, n, keyword);
    std::cout << result;
}