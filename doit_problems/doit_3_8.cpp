//
// Created by gomsang on 2/27/2020.
//

#include <stdio.h>
#include <iostream>

void *binsearch(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)) {
    int left = 0;
    int right = (int) nmemb;
    do {
        int center = (left + right) / 2;
        int com = compar((int *) base + center, key);

        if (com == 0) {
            return (int *) base + center;
        } else if (com < 0) {
            left = center + 1;
        } else {
            right = center - 1;
        }
    } while (left <= right);
}

int compare(const int *x, const int *y) {
    if (*x > *y) {
        return 1;
    } else if (*x < *y) {
        return -1;
    } else {
        return 0;
    }
}

int main(void) {
    int key = 2;                    // keyword
    int base[] = {1, 2, 3, 4, 5};   // base array
    size_t nx = 5;                  // base array's length
    size_t size = sizeof(int);      // size of each elements in array.
    int *p = (int *) binsearch(&key, base, nx, size, (int (*)(const void *, const void *)) compare);

    if (p == NULL)
        puts("search failed");
    else
        printf("%d is in x[%d]\n", key, (int) (p - base));

    free(base);
}