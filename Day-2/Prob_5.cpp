// Find square and cube
#include<iostream>
using namespace std;
int main(){

    int num, ch;

    cout<<"Enter number: "<<endl;
    cin>>num;

    cout<<"What you want to perform cube or Square "<<endl;
    cout<<"Press 1 for Square and 2 for cube"<<endl;
    cin>>ch;

    if(ch == 1){
        cout<<"Square of number is: "<<num*num<<endl;

    }else if(ch == 2){
        cout<<"Cube of number is: "<<num*num*num<<endl;
    }else{
        cout<<"Enter valid choice";
    }

    return 0;

}