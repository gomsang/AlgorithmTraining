//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "a의 값:";
    cin >> a;
    cout << "b의 값:";
    cin >> b;

    while (b <= a) {
        cout << "a보다 큰 값을 입력하세요!" << endl;
        cout << "b의 값:";
        cin >> b;
    }

    printf("b-a는 %d입니다", b - a);
}