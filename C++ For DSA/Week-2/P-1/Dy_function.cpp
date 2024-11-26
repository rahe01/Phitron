#include <bits/stdc++.h>

using namespace std;


pair<int*, int> fun(){
    int n;
    cin >> n;


    if(n <= 0){
        cout << "Invalid number of arguments";
        return {nullptr ,0};
    }

    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);

    return {arr,n};





}



int main(){

    auto [arr , n] = fun();

    if(arr != nullptr){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        delete[] arr;

    }

    else{
        cout << "Invalid number of arguments";
    }










    
    return 0;
}