//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int left = 1;
    int right = K;
    int center;
    int ans;

    do {
        center = (left + right) / 2;
        int cnt = 0;
        for (int i = 1; i <= N; ++i) {
            cnt += min(center / i, N);
        }
        if (cnt < K) {
            left = center + 1;
        } else if (cnt >= K) {
            right = center - 1;
            ans = center;
        }
    } while (left <= right);

    printf("%d", ans);
}