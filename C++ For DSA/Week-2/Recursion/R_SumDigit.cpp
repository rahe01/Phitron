#include <bits/stdc++.h>

using namespace std;


int sumdigit(int num){
    if(num >=0 && num <=9){
        return num;
    }

    return (num % 10) + sumdigit(num / 10);
}




int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int sum = sumdigit(num);
    
    cout << "Sum of digits: " << sum << endl;
    
    
    
    return 0;
}