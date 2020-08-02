//
// Created by gyeongrok on 8/2/2020.
//

#include <iostream>

using namespace std;

int bin_search2(const int a[], int n, int key) {
    int pl = 0;
    int pr = n - 1;

    do {
        int pc = (pl + pr) / 2;

        if (a[pc] >= key) {
            pr = pc;
        } else {
            pl = pc + 1;
        }
    } while (pl < pr);

    return a[pr] == key ? pr : -1;
}

int main() {
    int count;
    cin >> count;

    int *array = new int[count];

    for (int i = 0; i < count; ++i) {
        printf("[%d] : ", i);
        cin >> array[i];
    }

    cout << "keyword : ";
    int keyword;
    cin >> keyword;

    int result = bin_search2(array, count, keyword);

    putchar('\n');
    printf("%d is in array[%d]", keyword, result);
}