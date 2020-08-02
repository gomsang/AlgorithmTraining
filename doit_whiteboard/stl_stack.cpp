//
// Created by gyeongrok on 7/27/2020.
//

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        s.push(i);
    }

    printf("size : %d, isEmpty : %d\n", s.size(), s.empty());

    while (!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}