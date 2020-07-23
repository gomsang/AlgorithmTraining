//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int max4(int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

int main() {
    cout << max4(1,2,3,4);
}