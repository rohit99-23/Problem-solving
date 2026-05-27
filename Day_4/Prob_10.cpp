// Check posiƟve/negative/zero

# include <iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter number: "<<endl;
    cin>>num;

    if(num>0){
        cout<<"You have entered a positive number";
    }else if(num==0){
        cout<<"You entered Zero";
    }else{
        cout<<"You have entered a negative number";
    }

    return 0;
}