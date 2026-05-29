// Print all primes All N

#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;


    for(int i=2; i<=n; i++){
        bool isPrime = true;
        if(n <= 1){
           isPrime=false;
        }

        for(int j=2; j<i; j++){
            if(i%j == 0){
               isPrime = false;
               break;
            }
        }
    if(isPrime){
       cout<<i<<endl;
      }
    }
    
    return 0;
}