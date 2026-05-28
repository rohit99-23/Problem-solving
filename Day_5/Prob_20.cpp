// Count digits in a number

#include <iostream>
using namespace std;
int main(){
    long long N;

    cout<<"Enter number: ";
    cin>>N;

    int count=0;
    while(N>0){
       count++;
       N=N/10;
    }
    cout<<count;
    return 0;
}