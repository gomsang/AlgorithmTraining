//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int sumof(int a, int b) {
    int bigOne = (a - b) >= 0 ? a : b;
    int smallOne = (a - b) >= 0 ? b : a;

    int sum = 0;
    for (int i = smallOne; i <= bigOne; ++i) {
        sum += i;
    }
    return sum;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << sumof(a, b);
}
