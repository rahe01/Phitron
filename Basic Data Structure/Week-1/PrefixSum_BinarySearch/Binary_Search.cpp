#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int val;
    cin >> val;

    int flag;


    int l = 0;
    int r = n-1;

    while(l<=r){
        int mid = (l + r) / 2;
        if(a[mid] == val){
            flag = 1;
            break;
        }

        else if(a[mid] > val){
            r = mid - 1;

        }
        else{
            l = mid + 1;
        }
    }







    if (flag == 1){
        cout << "Found"<< endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    








    return 0;
}