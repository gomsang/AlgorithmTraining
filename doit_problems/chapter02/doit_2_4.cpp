//
// Created by gyeongrok on 7/20/2020.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
    int max = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] > max) max = a[i];
    }
    return max;
}

int main(void) {
    int *height;
    int number;
    srand(time(NULL));
    number = 5 + (rand() % 15) + 1;
    height = new int[number];

    srand(time(NULL));
    for (int i = 0; i < number; ++i) {
        height[i] = 100 + rand() % 90;
        printf("height[%d] = %d\n", i, height[i]);
    }
}