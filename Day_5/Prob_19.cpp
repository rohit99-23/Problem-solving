// Reverse a number

#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;

    int digit=n/10;
    int rem=n%10;

    int rev=10*digit+rem;
    cout<<rev;
    return 0;
}