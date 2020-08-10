//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int *array = new int[N];

    for (int i = 0; i < N; ++i) {
        scanf("%d", &array[i]);
    }

    sort(array, array + N);

    cout << array[K - 1];
}