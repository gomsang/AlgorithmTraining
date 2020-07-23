//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    int o;
    cin >> o;

    int cnt = 0;
    int n = o;

    do {
        int ad = (n / 10 + n % 10);
        n = (n % 10) * 10 + ad % 10;
        cnt++;
    } while (o != n);

    printf("%d", cnt);
}