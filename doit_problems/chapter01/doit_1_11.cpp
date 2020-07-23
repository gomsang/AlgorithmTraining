//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int cnt = 1;

    while (num > 9){
        num /= 10;
        cnt++;
    }

    printf("그 수는 %d자리입니다.", cnt);
    return 0;
}