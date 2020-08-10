//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>

using namespace std;

int main() {
    int input;
    cin >> input;

    for (int i = 1; i <= input; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = input - 1; i > 0; i--) {
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}