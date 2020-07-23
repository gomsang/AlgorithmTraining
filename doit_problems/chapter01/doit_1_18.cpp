//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

void nrpira(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < (i - 1); ++j) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * n - 1) - 2 * (i - 1); ++k) {
            printf("%d", i % 10);
        }
        putchar('\n');
    }
}

int main() {
    nrpira(4);
}
