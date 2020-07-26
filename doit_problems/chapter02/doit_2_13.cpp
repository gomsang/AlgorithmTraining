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

Date DateOf(int y, int m, int d) {
    Date date = Date{y, m, d};
    return date;
}

Date After(Date x, int n) {
    int keep = n + x.d;
    x.d = 1;

    while (keep > 0) {
        if (keep <= mdays[isleap(x.y)][x.m]) {
            x.d = keep;
            keep = 0;
        } else {
            keep -= mdays[isleap(x.y)][x.m];
            if (x.m >= 12) {
                x.m = 1;
                x.y++;
            } else {
                x.m++;
            }
        }
    }
    return x;
}

Date Before(Date x, int n) {

}

int main() {
    Date d{
            2020, 2, 20
    };
    Date after = After(d, 643);
    printf("%d %d %d", after.y, after.m, after.d);
}