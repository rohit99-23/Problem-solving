// Sum of first N natural numbers
#include <iostream>
using namespace std;
int main(){
    int N;

    cout<<"Enter Last range value to calculate sum of first N natural numbers: ";
    cin>>N;

    int add=0;
    for(int i=1; i<=N; i++){
        add=add+i;
    }
    cout<<add;
    return 0;


}