//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a+b);
    }
}