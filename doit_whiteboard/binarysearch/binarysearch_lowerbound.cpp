//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>

using namespace std;

int lower_bound(int arr[], int target, int size) {
    int center, left, right;
    left = 0;
    right = size - 1;

    while (left < right) {
        center = (left + right) / 2;
        if (arr[center] >= target) {
            right = center;
        } else left = center + 1;
    }
    return right;
}

int main() {
    int numbers[] = {-10, -10, 2, 3, 3, 6, 7, 10, 10, 10};
    int result = lower_bound(numbers, 3, sizeof(numbers) / sizeof(int));
    printf("%d", result);
}