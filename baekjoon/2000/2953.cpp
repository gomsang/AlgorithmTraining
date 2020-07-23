//
// Created by gyeongrok on 7/23/2020.
//

#include <iostream>

using namespace std;

int main() {
    int totalHighest = 0;
    int totalHighestP = -1;

    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        int input;
        cin >> input;

        sum += input;
        if ((i + 1) % 4 == 0) {
            if (sum > totalHighest) {
                totalHighest = sum;
                totalHighestP = (i + 1) / 4;
            }
            sum = 0;
        }
    }

    printf("%d %d", totalHighestP, totalHighest);
}