#include <iostream>
using namespace std;

int main(){
    int x;
    char c;

    cin >> x >> c;

    cout << "Hello, world! " <<(char)x << " " << (int)c;
    int ascii = c;
    cout << ascii;
    return 0;
}