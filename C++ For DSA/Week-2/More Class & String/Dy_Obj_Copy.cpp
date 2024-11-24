#include <bits/stdc++.h>

using namespace std;


class Cricker{
    public:

    int jersey;
    string country;
    Cricker(string country , int jersey ){
        this->country = country;
        this->jersey = jersey;
    }

};




int main(){

  Cricker* dhoni =  new Cricker("Indiaaa" , 20);
  Cricker* khili = new Cricker("India" ,40);

    //khili = dhoni;

    /*khili->country = dhoni->country;
    khili->jersey = dhoni->jersey;*/
    *khili = *dhoni;
    delete dhoni;
    



  cout << "Dhoni's Country: " << dhoni->country << ", Jersey Number: " << dhoni->jersey << endl;

    cout << "Khili's Country: " << khili->country << ", Jersey Number: " << khili->jersey << endl;

    
    return 0;
}