//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>

using namespace std;

int main() {
    char name[30];
    int alphabets[26] = {0,};

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> name;
        alphabets[name[0] - 'a'] = alphabets[name[0] - 'a'] + 1;
    }

    bool noOne = true;
    for (int j = 0; j < 26; ++j) {
        if (alphabets[j] >= 5) {
            printf("%c", 'a' + j);
            noOne = false;
        }
    }
    if(noOne) printf("PREDAJA");
}