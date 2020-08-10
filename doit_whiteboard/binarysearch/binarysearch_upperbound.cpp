//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>

using namespace std;

int upper_bound(int arr[], int target, int size) {
    int center, left, right;
    left = 0;
    right = size - 1;

    while (left < right) {
        center = (left + right) / 2;
        if (arr[center] > target) {
            right = center;
        } else left = center + 1;
    }
    return right;
}

int main() {
    int numbers[] = {1, 2, 2, 2, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7};
    // 몇번째 부터 초과?
    int result = upper_bound(numbers, 9, sizeof(numbers) / sizeof(int));
    printf("%d", result);
}