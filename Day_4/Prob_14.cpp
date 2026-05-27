// Check voƟng eligibility

#include <iostream>
using namespace std;
int main(){
    int age;

    cout<<"Enter Your Age: ";
    cin>>age;

    if(age<=18){
        cout<<"Sorry! You are currently Teenager and Not eligible for voting";
    }else if(age>=18){
        cout<<"Congratulations! You are Eligible for voting";
    }else{
        cout<<"Enter valid age";
    }
    return 0;
}