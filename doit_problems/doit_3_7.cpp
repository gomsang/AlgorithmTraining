//
// Created by gomsang on 1/22/2020.
//

#include <iostream>

void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size, int(*func)(const void *, const void *)) {
    for (int i = 0; i < (int) nmemb; ++i) {
        if (func(key, (void *) base + i * size)) {
            return (void *) base + i * size;
        }
    }
    return NULL;
}

int equal(const void *x, const void *y) {
    if (*(int *) x == *(int *) y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int key = 3;                    // keyword
    int base[] = {1, 2, 3, 4, 5};   // base array
    size_t nx = 5;                  // base array's length
    size_t size = sizeof(int);      // size of each elements in array.
    int *p = (int *) seqsearch(&key, base, nx, size, (int (*)(const void *, const void *)) equal);

    if (p == NULL)
        puts("search failed");
    else
        printf("%d is in x[%d]\n", key, (int) (p - base));

    free(base);
}