//
// Created by gomsang on 2/28/2020.
//

#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int *a, const int *b) {
    if (*a > *b)
        return 1;
    else if (*a < *b)
        return -1;
    else return 0;
}

int main(void) {
    int array[] = {1, 2, 4, 5, 6, 7, 11, 13, 15, 19};
    int n = sizeof(array) / sizeof(int);
    int keyword = 6;

    int* p = (int *)(bsearch(&keyword, array, n, sizeof(int), (int (*)(const void *, const void *)) int_cmpr));

    if (p == NULL)
        puts("search failed");
    else
        printf("%d is in x[%d]\n", keyword, (int) (p - array));
    free(array);
    return 0;
}