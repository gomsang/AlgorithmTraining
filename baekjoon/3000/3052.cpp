//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    int arr[42] = {0,};

    int input;
    int cnt = 0;

    for (int i = 0; i < 10; ++i) {
        cin >> input;
        int result = input % 42;
        if (!arr[result]) {
            arr[result] = 1;
            cnt++;
        }
    }
    printf("%d", cnt);
}