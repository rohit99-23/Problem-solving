// Reverse a number

#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;

    int rev = 0;
    while(N>0){
        int rem=N%10;
        rev=rev*10+rem;
        N=N/10;
    }
    cout<<"Reversed number is: "<<rev;
    return 0;
}