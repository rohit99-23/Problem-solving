// Armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N,d;
    cout<<"Enter a number: ";
    cin>>N;
    
    cout<<endl;

    cout<<"Enter total digit count of number you entered: ";
    cin>>d;

    int og=N;
    int arm=0;
    while(N>0){
        int r=N%10;
        arm = arm+pow(r,d);
        N=N/10;
    }
    if(og==arm){
        cout<<"Entered number is an Armstrong Number";
    }else{
        cout<<"Entered number is not an Armstrong Number";
    }
    return 0;

}