//
// Created by gyeongrok on 7/20/2020.
//

#define ARRAY_SIZE 5

#include <iostream>

void ary_rcopy(int *a, const int *b, int n) {
    for (int i = 0; i < n; ++i) {
        a[n - i - 1] = b[i];
    }
}

int main() {
    int *a = new int[ARRAY_SIZE];
    int b[] = {1, 2, 3, 4, 5};
    ary_rcopy(a, b, ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::printf("%d ", a[i]);
    }
}