//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int main() {
    cout << "직사각형을 출력합니다." << endl;
    int height, width;
    cout << "높이 :";
    cin >> height;
    cout << "너비 :";
    cin >> width;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            printf("*");
        }
        putchar('\n');
    }
}