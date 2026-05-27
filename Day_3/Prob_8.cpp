//  Find simple interest
#include <iostream>
using namespace std;

void cal_int(){
    int p, r, t;

    cout<<"Enter Principal, Rate and Time: ";
    cin>>p>>r>>t;

    int SI = (p*r*t)/100;

    cout<<"Simple intrest of your principle amount "<<p <<" at the rate of "<<r <<" % for the the duration of "<<t<<" years is :"<<SI<<endl;
}
int main(){
    cal_int();
    return 0;
}