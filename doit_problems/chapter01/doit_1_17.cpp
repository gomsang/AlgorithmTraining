//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

void spira(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            printf(" ");
        }
        for (int k = 1; k <= (i - 1) * 2 + 1; ++k) {
            printf("*");
        }
        putchar('\n');
    }
}

int main() {
    spira(4);
}
