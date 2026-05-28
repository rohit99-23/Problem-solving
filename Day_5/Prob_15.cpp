// Print multiplicaƟon table

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number of which you want multiplication table: ";
    cin>>a;

    int mul=1;
    cout<<"Multiplication table of: "<<a<<" is"<<endl;
    for(int i=1; i<=10; i++){
        mul=i*a;
        cout<<a<<"*"<<i<<"="<<mul<<endl;
    }
    return 0;

}