//
// Created by gyeongrok on 8/2/2020.
//

#include <iostream>

using namespace std;

int search_idx(int *a, int n, int key) {
    printf("   |");
    for (int j = 0; j < n; ++j) {
        printf(" %d ", a[j]);
    }
    putchar('\n');
    printf("---+---------------------");
    putchar('\n');

    int i = 0;
    a[n] = key;
    for (;;) {
        printf("   |");
        for (int j = 0; j < i; ++j) {
            printf("   ");
        }
        printf(" * \n");
        printf("%3d|", i);

        for (int j = 0; j < n; ++j) {
            printf(" %d ", a[j]);
        }
        putchar('\n');

        if (a[i] == key)
            break;
        i++;
    }
    return i == n ? -1 : i;
}

int main() {
    int i, nx, ky, idx;
    int *x;
    puts("선형 검색(보초법)");
    printf("요소 개수 : ");
    cin >> nx;

    x = new int[nx + 1];
    for (int i = 0; i < nx; ++i) {
        printf("x[%d] : ", i);
        cin >> x[i];
    }

    cout << "검색값 : ";
    cin >> ky;
    idx = search_idx(x, nx, ky);
    if (idx == -1) {
        puts("검색에 실패했습니다.");
    } else {
        printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
    }
    free(x);

    return 0;
}