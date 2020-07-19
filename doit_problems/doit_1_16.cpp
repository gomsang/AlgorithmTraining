//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

void triangleLB(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        putchar('\n');
    }
};

void triangleLU(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = n - (i - 1); j >= 1; --j) {
            printf("*");
        }
        putchar('\n');
    }
};

void triangleRU(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            printf(" ");
        }
        for (int k = 1; k <= n - (i - 1); ++k) {
            printf("*");
        }
        putchar('\n');
    }
};

void triangleRB(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= (n - i); ++j) {
            printf(" ");
        }
        for (int k = 1; k <= i; ++k) {
            printf("*");
        }
        putchar('\n');
    }
};

int main() {
}