//
// Created by gyeongrok on 7/20/2020.
//

#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
    }
    return min;
}

int main(void){
    int *height;
    int number;
    printf("사람 수 : ");
    scanf("%d", &number);
    height = new int[number];
    printf("%d 사람의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; ++i) {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("최솟값은 %d입니다.\n", minof(height, number));
    delete[] height;

    return 0;
}