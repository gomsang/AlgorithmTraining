//
// Created by gomsang on 1/22/2020.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int cmp_desc(const long *a, const long *b) {
    if (*a > *b) {
        return -1;
    } else if (*a < *b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    long array[5] = {49, 48, 47, 46, 45};
    long keyword;

    cin >> keyword;

    long *result = (long *) bsearch(&keyword, array, 5, sizeof(long), (int (*)(const void *, const void *)) cmp_desc);

    if (result == NULL) {
        cout << "search failed";
    } else {
        cout << (long) (result - array);
    }
}