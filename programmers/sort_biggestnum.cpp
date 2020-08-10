//
// Created by gyeongrok on 8/3/2020.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const int &p1, const int &p2) {
    long case1 = stol(to_string(p1) + to_string(p2));
    long case2 = stol(to_string(p2) + to_string(p1));

    return case1 > case2;
}


string solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), cmp);

    string answer = "";
    for (int i : numbers) {
        answer += to_string(i);
    }
    if(answer[0] == '0') return "0";
    return answer;
}