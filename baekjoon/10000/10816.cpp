//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    sort(array, array + n);

    int k;
    cin >> k;

    int keyword;
    for (int j = 0; j < k; ++j) {
        cin >> keyword;

        int find_lower = 0;
        int find_upper = 0;

        int left = 0;
        int right = n - 1;
        int center = 0;

        // lower bound
        do {
            center = (left + right) / 2;
            if (array[center] > keyword) {
                right = center - 1;
            } else if (array[center] < keyword) {
                left = center + 1;
            } else {
                right = center - 1;
                find_lower = center;
            }
        } while (left <= right);

        left = 0;
        right = n - 1;
        do {
            center = (left + right) / 2;
            if (array[center] > keyword) {
                right = center - 1;
            } else if (array[center] < keyword) {
                left = center + 1;
            } else {
                left = center + 1;
                find_upper = center + 1;
            }
        } while (left <= right);

        printf("%d ", find_upper - find_lower);
    }
}