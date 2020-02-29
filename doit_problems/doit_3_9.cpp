//
// Created by gomsang on 2/28/2020.
//

#include <iostream>

void *bsearchx(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)) {
    int left = 0;
    int right = (int) nmemb;
    do {
        int center = (left + right) / 2;
        int result_compar = compar(key, (char *) base + center * size);
        if (result_compar > 0) {
            left = center + 1;
        } else if (result_compar < 0) {
            right = center - 1;
        } else {
            return (char *) base + center * size;
        }
    } while (left <= right);
}

int compare(const void *a, const void *b) {
    if (*(int *) a > *(int *) b) {
        return 1;
    } else if (*(int *) a < *(int *) b) {
        return -1;
    } else {
        return 0;
    }
}

int main(void) {
    int key = 5;
    int array[] = {1, 2, 3, 5, 10, 13, 19, 20};
    size_t length = 8;
    size_t size = sizeof(int);
    int *p = (int *) bsearchx(&key, array, length, size, compare);

    if (p == NULL)
        puts("search failed");
    else
        printf("%d is in x[%d]\n", key, p - array);
    free(array);
}