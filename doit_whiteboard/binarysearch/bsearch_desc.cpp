//
// Created by gomsang on 2/26/2020.
//

#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int *a, const int *b) {
    if (*a < *b)
        return 1;
    else if (*a > *b)
        return -1;
    else return 0;
}

int main(void) {
    int nx, ky;
    int *x;
    int *p;
    puts("searching use bsearch function.");
    printf("elements count : ");
    scanf("%d", &nx);
    x = new int[nx];
    printf("Enter in descending order.\n", nx);
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for (int i = 1; i < nx; i++) {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while (x[i] > x[i - 1]);
    }
    printf("Search : ");
    scanf("%d", &ky);
    p = static_cast<int *>(bsearch(&ky, x, nx, sizeof(int), (int (*)(const void *, const void *)) int_cmpr));
    if (p == NULL)
        puts("search failed");
    else
        printf("%d is in x[%d]\n", ky, (int) (p - x));
    free(x);
    return 0;
}