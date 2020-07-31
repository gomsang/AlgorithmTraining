//
// Created by gyeongrok on 7/24/2020.
//

#include <iostream>

typedef struct {
    int y;
    int m;
    int d;
} Date;

int mdays[][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}


Date After(Date x, int n) {
    x.d += n;
    while (x.d > mdays[isleap(x.y)][x.m - 1]) {
        x.d -= mdays[isleap(x.y)][x.m - 1];
        x.m += 1;
        if (x.m > 12) {
            x.m = 1;
            x.y += 1;
        }
    }
    return x;
}

Date Before(Date x, int n) {
    x.d -= n;
    while (x.d < 1) {
        x.m -= 1;
        if (x.m < 1) {
            x.m = 12;
            x.y -= 1;
        }
        x.d += mdays[isleap(x.y)][x.m - 1];
    }
    return x;
}

int main() {
    Date d{
            2020, 2, 20
    };
    Date after = Before(d, 222);
    printf("%d %d %d", after.y, after.m, after.d);
}