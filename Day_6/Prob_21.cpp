// Palindrome number 
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;

    int og=a;
    int rev=0;
    while(a>0){
       int rem=a%10;
       rev=rev*10+rem;
       a=a/10;
    }
    cout<<rev<<endl;
    if(og == rev){
        cout<<"You have entered a palindrome number";
    }else{
        cout<<"You have entered a non palindrome number";
    }
    return 0;
}
