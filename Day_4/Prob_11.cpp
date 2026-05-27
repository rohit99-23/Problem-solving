// Largest of two numbers 
#include <iostream>
using namespace std;
int main(){
    int num1, num2;

    cout<<"Enter Two number: ";
    cin>>num1>>num2;

    if(num1>num2){
        cout<<"Lagest num is: "<<num1;
    }else if(num1<num2){
        cout<<"Largest number is: "<<num2;
    }else{
        cout<<"You have entered Equal Number";
    }

    return 0;
}