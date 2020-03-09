//
// Created by gomsang on 3/10/2020.
//

#include <stdio.h>
#include "IntStack.h"

int main(void) {
    IntStack s;
    if (Initialize(&s, 64) == -1) {
        puts("stack creation failed.");
    }

    while (1) {
        int menu, x;
        printf("current data count : %d / %d\n", Size(&s), Capacity(&s));
        printf("(1)push (2)pop (3)peek (4)print (0)exit : ");
        scanf("%d", &menu);

        if (menu == 0) break;
        switch (menu) {
            case 1:
                printf("input : ");
                scanf("%d", &x);
                if (Push(&s, x) == -1)
                    puts("\aerror : push failed");
                break;
            case 2:
                if (Pop(&s, &x) == -1)
                    puts("\aerror : pop failed");
                else
                    printf("pop data is %d.\n", x);
                break;
            case 3:
                if (Peek(&s, &x) == -1)
                    puts("\a error : peek failed");
                else
                    printf("peek data is %d.\n", x);
                break;
            case 4:
                Print(&s);
                break;
        }
    }
    Terminate(&s);
    return 0;

}