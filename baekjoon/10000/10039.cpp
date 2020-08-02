//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int input;
    for (int i = 0; i < 5; ++i) {
        cin >> input;
        if(input < 40) input = 40;
        sum += input;
    }
    cout << (sum / 5);
}