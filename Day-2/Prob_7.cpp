// Find area of rectangle, Square or Circle
#include <iostream>
using namespace std;

void rect(){
    int length, breadth;
    cout<<"Enter Length & Breadth of Rectangle: ";
    cin>>length>>breadth;

    cout<<"Area of your Rectangle is: "<<length*breadth;
}

void sqr(){
    double side;
    cout<<"Enter side of Square: ";
    cin>>side;

    double Area=side*side;
    cout<<"Area of your Rectangle is: "<<Area;

}

void cir(){
    double radius;
    cout<<"Enter Radius of Circle: ";
    cin>>radius;

    double Area=3.14*radius*radius;
    cout<<"Area of your Circle is: "<<Area;

}


int main(){
    int a;
    cout<<"What you want to check Enter the number of your choice:"<<endl;
    cout<<"Press 1 for Area of Rectangle"<<endl;
    cout<<"Press 2 for Area of Square"<<endl;
    cout<<"Press 3 for Area of Circle"<<endl;
    cin>>a;

    if (a == 1){
        rect();
    }else if(a == 2){
        sqr();
    }else if(a == 3){
        cir();
    }else{
        cout<<"Enter the correct Choice";
    }

    main ();

    return 0;
}