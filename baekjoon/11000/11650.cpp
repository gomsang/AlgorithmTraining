//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    int x;
    int y;
} Coordinate;

bool cmp(const Coordinate &c1, const Coordinate &c2) {
    if (c1.x == c2.x) {
        return c1.y < c2.y;
    } else {
        return c1.x < c2.x;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    vector<Coordinate> v;

    for (int i = 0; i < N; ++i) {
        Coordinate c;
        scanf("%d %d", &c.x, &c.y);
        v.push_back(c);
    }
    sort(v.begin(), v.end(), cmp);

    for (Coordinate c : v) {
        printf("%d %d\n", c.x, c.y);
    }
}