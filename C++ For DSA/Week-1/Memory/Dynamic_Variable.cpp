#include <bits/stdc++.h>

using namespace std;


int *p;
void fun(){
    int a = 90;
    p = &a;
    cout<< *p;
    return;
}
int main(){


    fun();
    // int *p = new int;
    // *p = 105;
    cout<< *p;



    return 0;
}