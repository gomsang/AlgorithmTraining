//
// Created by gyeongrok on 7/27/2020.
//

#include <iostream>
#include <queue>

using namespace std;

int getHighestValue(queue<int> q) {
    int highest = 0;
    int temp;
    for (int i = 0; i <= q.size(); ++i) {
        temp = q.front();
        if (highest < temp) highest = temp;
        q.pop();
        q.push(temp);
    }
    return highest;
}

int main() {
    int count;
    cin >> count;

    for (int i = 0; i < count; ++i) {
        int N, M;
        cin >> N >> M;

        queue<int> printQueue;
        queue<int> orderQueue;

        for (int j = 0; j < N; ++j) {
            int priority;
            cin >> priority;

            printQueue.push(priority);
            orderQueue.push(j);
        }

        int printCnt = 0;
        int highestPriority = getHighestValue(printQueue);
        while (!printQueue.empty()) {
            if (printQueue.front() >= highestPriority) {
                printCnt++;
                if (orderQueue.front() == M) {
                    cout << printCnt << endl;
                    break;
                }
                printQueue.pop();
                orderQueue.pop();
                highestPriority = getHighestValue(printQueue);
            } else {
                int value = printQueue.front();
                int order = orderQueue.front();

                printQueue.pop();
                orderQueue.pop();

                printQueue.push(value);
                orderQueue.push(order);
            }
        }
    }
}