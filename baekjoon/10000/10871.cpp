//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    int n, x, c;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        if (c < x) printf("%d ", c);
    }
}