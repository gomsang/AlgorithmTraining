//
// Created by gyeongrok on 7/27/2020.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    int *homes = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> homes[i];
    }

    sort(homes, homes + N);

    int left = 1;
    int right = homes[N - 1] - homes[0];
    int ans = -1;

    while (left <= right) {
        int center = (left + right) / 2;

        int cnt = 1;
        int prevHome = homes[0];

        for (int i = 1; i < N; i++) {
            if (homes[i] - prevHome >= center) {
                cnt++;
                prevHome = homes[i];
            }
        }

        if (cnt >= C) {
            ans = center;
            left = center + 1;
        } else {
            right = center - 1;
        }
    }
    cout << ans;
}