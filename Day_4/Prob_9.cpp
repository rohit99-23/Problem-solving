// Check even or odd

#include <iostream>
using namespace std;
int main(){
    int num;

    cout<<"enter a Number: "<<endl;
    cin>>num;

    int even=num%2;

    if(even==0){
        cout<<"You have entered Even Number"<<endl;
    }else{
        cout<<"You have entered Odd number";
    }

    return 0;
}