//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int main() {
    cout << "사각형을 출력합니다." << endl;
    cout << "입력할 수 :";

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        for (int j = 0; j < cnt; ++j) {
            printf("*");
        }
        putchar('\n');
    }
}