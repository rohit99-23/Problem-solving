//Swap two numbers

#include<iostream>
using namespace std;
int main(){
    int a, b;
    
    cout<<"Enter value for a: "<<endl;
    cin >>a;

    cout<<"Enter value for b: "<<endl;
    cin >>b;


    int temp=a;
    a=b;
    b=temp;

    cout<<"Number is Swapped"<<endl;
    char ch;
    cout<<"For check the value of a & b Enter your choice: ";
    cin>>ch;

    if(ch == 'a'){
        cout<<"New value of a is: "<<a<<endl;
    }else if(ch== 'b'){
        cout<<"New value of b is: "<<b<<endl;
    }else{
        cout<<"Enter valid var"<<endl;
    }

    return 0;


}