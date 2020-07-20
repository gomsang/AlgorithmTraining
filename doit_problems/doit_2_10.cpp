//
// Created by gyeongrok on 7/20/2020.
//

#define ARRAY_SIZE 5

#include <iostream>
#include <time.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

void shuffle(int *array, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        int pos = i + rand() % (n - i);
        if (i != pos) swap(int, array[i], array[pos]);
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    shuffle(array, ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::printf("%d ", array[i]);
    }
}