//
// Created by gyeongrok on 8/2/2020.
//

#include <iostream>

using namespace std;

int search_idx(const int a[], int n, int key, int idx[]) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == key) {
            idx[cnt++] = i;
        }
    }
    return cnt;
}

int main() {
    int i, nx, ky, idx;
    int *x, *cntx;
    puts("선형 검색(보초법)");
    printf("요소 개수 : ");
    cin >> nx;

    x = new int[nx];
    cntx = new int[nx];
    for (int j = 0; j < nx; ++j) {
        cntx[j] = 0;
    }

    for (int i = 0; i < nx; ++i) {
        printf("x[%d] : ", i);
        cin >> x[i];
    }

    cout << "검색값 : ";
    cin >> ky;
    idx = search_idx(x, nx, ky, cntx);
    if (idx == -1) {
        puts("검색에 실패했습니다.");
    } else {
        printf("%d(은)는 %d개 있습니다.\n", ky, idx);
    }
    free(x);

    return 0;
}