//
// Created by gyeongrok on 7/23/2020.
//

#include <list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(2);
    l.push_back(3);

    l.pop_back();

    l.push_front(2);
    l.push_front(3);

}