// Sum of even numbers till N

#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter last limit Value to calculate sum of Even numbers till N: ";
    cin>>N;

    int sum=0;
    for(int i=2; i<=N; i++){
        if (i%2==0){
            sum=sum+i;
        }
    }
    cout<<"Final sum of All even numbers till "<<N<<" is: "<<sum;


}