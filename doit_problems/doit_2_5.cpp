//
// Created by gyeongrok on 7/20/2020.
//

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t;} while(0);


void print_array(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

void ary_reverse(int a[], int n) {
    print_array(a, n);
    for (int i = 0; i < n / 2; i++) {
        printf("a[%d]와 a[%d]를 교환합니다.\n", i, n - i - 1);
        swap(int, a[i], a[n - i - 1]);
        print_array(a, n);
    }
}

int main() {
    int *x;
    int nx;

    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = static_cast<int *>(calloc(nx, sizeof(int)));
    printf("%d개의 정수를 입력하세요.\n", nx);
    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);
    printf("역순 정렬을 종료합니다.\n");
    free(x);

    return 0;
}