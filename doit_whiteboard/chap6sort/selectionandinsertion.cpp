//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>

#define swap(type, a, b) do{ type t = a; a = b; b = t;} while(0)

using namespace std;

void selection(int *a, int n) {
    int i, j;
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[min])
                min = j;
            swap(int, a[i], a[min]);
        }
    }
}

void insertion(int a[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        int tmp = a[i];
        for (j = i; j > 0 && a[j - 1] > tmp; j--) {
            a[j] = a[j - 1];
        }
        a[j] = tmp;
    }
}

int main() {
    int nx;
    int *x;
    puts("단순 삽입 정렬");

    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = new int[nx];

    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    insertion(x, nx);

    puts("오름차순으로 정렬했습니다.");
    for (int i = 0; i < nx; ++i) {
        printf("x[%d] = %d\n", i, x[i]);
    }
    free(x);

    return 0;
}