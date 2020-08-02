//
// Created by gyeongrok on 8/2/2020.
//

#include <iostream>

using namespace std;

int bin_search(const int a[], int n, int key) {
    putchar('\n');

    int pl = 0;
    int pr = n - 1;

    printf("   |");
    for (int i = 0; i < n; ++i) {
        printf(" %d ", i);
    }
    putchar('\n');
    printf("---+--------------------------\n");

    do {
        int pc = (pl + pr) / 2;

        printf("   |");
        for (int i = 0; i < n; ++i) {
            if (i == pl) {
                printf("<- ");
            } else if (i == pr) {
                printf(" ->");
                break;
            } else if (i == pc) {
                printf(" + ");
            } else {
                printf("   ");
            }
        }
        putchar('\n');

        printf(" %d |", pc);
        for (int j = 0; j < n; ++j) {
            printf(" %d ", a[j]);
        }
        putchar('\n');

        if (a[pc] == key) {
            return pc;
        } else if (a[pc] < key) {
            pl = pc + 1;
        } else {
            pr = pc - 1;
        }
    } while (pl <= pr);

    return -1;
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

    int result = bin_search(array, count, keyword);

    putchar('\n');
    printf("%d is in array[%d]", keyword, result);
}