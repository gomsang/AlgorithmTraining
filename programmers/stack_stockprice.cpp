#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;

    for (int i = 0; i < prices.size(); ++i) {
        int delay = 0;
        for (int j = i + 1; j < prices.size(); ++j) {
            if (prices[j] < prices[i]) {
                delay++;
                break;
            } else {
                delay++;
            }
        }
        answer.push_back(delay);
    }

    return answer;
}

int main() {
    vector<int> parameter;
    parameter.push_back(1);
    parameter.push_back(2);
    parameter.push_back(3);
    parameter.push_back(2);
    parameter.push_back(3);

    vector<int> s = solution(parameter);
    for (int i = 0; i < s.size(); ++i) {
        printf("%d ", s[i]);
    }
}
