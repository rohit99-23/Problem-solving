//  Largest of three numbers 
#include <iostream>
using namespace std;
int main(){
    int a, b, c;

    cout<<"Enter Three Numbers: ";
    cin>>a>>b>>c;

    if(a>b && a>c || a==b && a>c || a==c && a>b){
        cout<<"Largest Number is: "<<a;
    }else if(b>a && b>c ){
        cout<<"Largest number is: "<<b;
    }else if(c>a && c>b || b==c && b>a){
        cout<<"Largest number is: "<<c;
    }else{
        cout<<"You have entered Equal number";
    }
    return 0;
}