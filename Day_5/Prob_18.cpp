// Factorial of a number 

#include <iostream>
using namespace std;
int main(){
    int a;

    cout<<"Enter a Number to find Factorial of that: ";
    cin>>a;
    
    if(a<=0){
        cout<<"Enter a Positive number greater than 0";
        exit(1);
    }

    int fact=1;

    for(int i=1; i<=a; i++) {
        fact=i*fact;
    }
    cout<<"factorial of "<<a<<" is : "<<fact;
    return 0;
}