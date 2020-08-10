//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>

#define swap(type, a, b) do { type temp; temp = a; a = b; b =temp; } while(0)

using namespace std;

void bubble(int a[], int n) {
    int compareCnt = 0;
    int swapCnt = 0;

    for (int i = 0; i < n - 1; ++i) {
        printf("패스%d:\n", i + 1);

        for (int j = n - 1; j > i; --j) {
            for (int k = 0; k < j; ++k) {
                printf(" %d", a[k]);
            }
            if (a[j - 1] > a[j]) {
                swap(int, a[j - 1], a[j]);
                swapCnt++;
                printf("+");
                printf(" %d", a[j - 1]);
            } else {
                printf("-");
                printf(" %d", a[j]);
            }
            for (int k = j + 1; k < n; ++k) {
                printf(" %d", a[k]);
            }
            putchar('\n');
            compareCnt++;
        }
        for (int k = 0; k < n; ++k) {
            printf(" %d", a[k]);
        }
        putchar('\n');
    }
}

int main() {
    int nx;
    int *x;

    puts("버블 정렬");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = new int[nx];

    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    bubble(x, nx);

    puts("오름차순으로 정렬했습니다.");
    for (int i = 0; i < nx; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}