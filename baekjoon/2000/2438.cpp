//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
}