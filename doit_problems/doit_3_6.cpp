//
// Created by gomsang on 1/22/2020.
//

#include <iostream>
#include <stdlib.h>

int cmp_descending(const long *x1, const long *x2) {
    if (*x1 < *x2) {
        return 1;
    } else if (*x1 > *x2) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    long array[5] = {49, 48, 47, 46, 45};
    long keyword = 0;
    scanf("%ld", &keyword);

    long *p;
    p = static_cast<long *>(bsearch(&keyword, array, 5, sizeof(long),
                                    (int (*)(const void *, const void *)) cmp_descending));
    if (p == NULL) {
        printf("error");
    } else {
        printf("%d", (int) (p - array));
    }
}