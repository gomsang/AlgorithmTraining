//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, num;
    cin >> num;

    for (int i = 0; i < num; ++i) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
}