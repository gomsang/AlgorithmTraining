//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>

#define swap(type, a, b) do {type t = a; a = b; b = a;} while(0)

using namespace std;

void bubble(int a[], int n) {
    int compareCnt = 0;
    int swapCnt = 0;

    int k = 0;
    int cnt = 0;
    while (k < n - 1) {
        printf("패스%d:\n", ++cnt);
        int last = n - 1;
        for (int j = n - 1; j > k; j--) {

            for (int l = 0; l < j; ++l) {
                printf(" %d", a[l]);
            }

            if (a[j - 1] > a[j]) {
                swap(int, a[j - 1], a[j]);
                last = j;

                swapCnt++;
                printf("+");
                printf(" %d", a[j - 1]);
            } else {
                printf("-");
                printf(" %d", a[j]);
            }

            for (int l = j + 1; l < n; ++l) {
                printf(" %d", a[l]);
            }
            putchar('\n');
            compareCnt++;
        }
        for (int l = 0; l < n; ++l) {
            printf(" %d", a[l]);
        }
        putchar('\n');
        k = last;
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