//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    int count;
    cin >> count;

    for (int i = 0; i < count; ++i) {
        string input;
        cin >> input;

        list<char> l;
        auto cursor = l.begin();

        for (char & i : input) {
            switch (i) {
                case '<':
                    if (cursor != l.begin()) cursor--;
                    break;
                case '>':
                    if (cursor != l.end()) cursor++;
                    break;
                case '-':
                    if (cursor != l.begin()){
                        cursor--;
                        cursor = l.erase(cursor);
                    }
                    break;
                default:
                    cursor = l.insert(cursor, i);
                    cursor++;
            }
        }

        for (auto iter = l.begin(); iter != l.end(); iter++) {
            cout << *iter;
        }

        cout << endl;
    }
}