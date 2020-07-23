//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cout << "N? :  ";
    cin >> n;
    cout << endl;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        printf("%d ", i);
        sum += i;

        if (i < n) {
            printf("+ ");
        } else {
            printf("= %d", sum);
        }
    }
}