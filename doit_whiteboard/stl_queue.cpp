//
// Created by gyeongrok on 7/27/2020.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        q.push(i);
    }

    printf("front : %d, back : %d, size : %d, isEmpty? : %d\n", q.front(), q.back(), q.size(), q.empty());

    for (int i = 0; i < cnt; ++i) {
        cout << q.front() << endl;
        q.pop();
    }
}