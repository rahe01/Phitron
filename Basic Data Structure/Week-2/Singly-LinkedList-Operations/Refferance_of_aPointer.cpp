#include <bits/stdc++.h>

using namespace std;


void fun(int* p){
  //  cout << "In fun function" << *p << endl;

   
  p = NULL;
    cout <<&p << endl;
}



int main(){
    

    int x = 10;
    int* p = &x;

    fun(p);
    //cout << "In main function" << *p << endl;

    cout <<&p << endl;
    cout <<p << endl;
    
   
    return 0;
}