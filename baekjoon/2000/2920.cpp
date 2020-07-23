//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

int main() {
    bool asc = true;
    bool desc = true;

    int input;
    for (int i = 1; i <= 8; ++i) {
        std::cin >> input;
        asc = asc && (input == i);
        desc = desc && (input == 8 - i + 1);
    }

    if (asc) {
        printf("ascending");
    } else if (desc) {
        printf("descending");
    } else {
        printf("mixed");
    }
}