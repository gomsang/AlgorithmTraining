//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    int width, height;

    scanf("%d %d", &height, &width);

    int windows[5] = {0,};

    int *temp = new int[width];
    for (int j = 0; j < width; ++j) {
        temp[j] = 0;
    }

    char *str = new char[width * 5 + 1];

    for (int i = 0; i < height * 5 + 1; ++i) {
        scanf("%s", str);

        if (str[1] == '#' && i >= 1) {
            for (int j = 0; j < width; ++j) {
                windows[temp[j]] = windows[temp[j]] + 1;
                temp[j] = 0;
            }
            continue;
        }

        for (int k = 0; k < width; ++k) {
            if (str[5 * k + 1] == '*') {
                temp[k] = temp[k] + 1;
            }
        }
    }

    for (int l = 0; l < 5; ++l) {
        printf("%d ", windows[l]);
    }
}