//
// Created by gyeongrok on 7/20/2020.
//

#include <iostream>

using namespace std;

int main(){
    printf("%3c|", ' ');
    for(int i = 1; i < 10; i++){
        printf("%3d", i);
    }
    printf("\n---+----------------------------\n");
    for(int i = 1; i < 10; i++){
        printf("%3d|", i);
        for(int j = 1; j < 10; j++){
            printf("%3d", i * j);
        }
        putchar('\n');
    }
}