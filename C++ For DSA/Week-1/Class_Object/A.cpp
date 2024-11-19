#include <bits/stdc++.h>

using namespace std;


class Worker{
    public:
    string name;
    int age;
    double salary;


    Worker(string name, int age, double salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
    }


   




};





 Worker fun(){
        Worker rahe = Worker("Rahe" , 23,434.4);
        return rahe;
    }


int main(){

   // Worker w1 =  Worker("Rahe" , 20, 1000.4);
   // Worker w2 =  Worker("Ravi" , 25, 1500.5);


  //  cout << "Name: " << w1.name << ", Age: " << w1.age << ", Salary: " << w1.salary << endl;
 //   cout << "Name: " << w2.name << ", Age: " << w2.age << ", Salary: " << w2.salary << endl;


    
   Worker obj = fun();
    cout << "Name: " << obj.name << ", Age: " << obj.age << ", Salary: " << obj.salary << endl;
   











    return 0;
}