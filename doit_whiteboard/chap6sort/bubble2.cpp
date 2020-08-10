//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>

#define swap(type, a, b) do {type t = b; b = a; a = t;} while(0)

void bubble(int a[], int n) {
    int i, j;
    for (int i = 0; i < n - 1; ++i) {
        int exchg = 0;
        for (int j = n - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                swap(int, a[j - 1], a[j]);
                exchg++;
            }
        }
        if (exchg == 0) break;
    }
}