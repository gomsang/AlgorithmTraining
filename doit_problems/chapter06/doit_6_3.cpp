//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>

using namespace std;

int is_sorted(const int a[], int n) {
    for (int i = n - 1; i > 0; i--) {
        if (a[i - 1] > a[i])
            return 0;
    }
    return 1;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    cout << is_sorted(a, 5);
}