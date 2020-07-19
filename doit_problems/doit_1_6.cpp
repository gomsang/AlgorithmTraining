//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int main(void) {
    int i, n;
    int sum;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값 : ");
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while (i <= n) {
        sum += 1;
        i++;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    printf("%d", i);

    return 0;
}
