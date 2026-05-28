// Factorial of a number 

#include <iostream>
using namespace std;
int main(){
    int a;

    cout<<"Enter a Number to find Factorial of that: ";
    cin>>a;

    int fact=1;

    for(int i=1; i<=a; i++) {
        fact=i*fact;
    }
    cout<<"factorial of "<<a<<" is : "<<fact;
    return 0;
}