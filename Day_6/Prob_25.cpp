// GCD of two numbers 
#include <iostream>
using namespace std;
void gcd_cal(){
    int a,b;
    cout<<"Enyter two number: ";
    cin>>a>>b;

    int gcd = 1;
    if(a<b){
        for(int i = 1; i <= a; i++){
            if(a % i == 0 && b % i == 0){
                gcd = i;

            }
        }
    }else{
        for(int i = 1; i <= b; i++){
            if(a % i == 0 && b % i == 0){
                gcd = i;
            }
        }
    }
    cout<<"GCD of "<<a<<" & "<<b <<" is :"<<gcd;
    
}
int main(){
    gcd_cal();

    return 0;
}