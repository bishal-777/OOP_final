//This program converts one class type to another class type
#include<iostream>
#include<math.h>
using namespace std;

class RectangularCo{
    int x,y;
    public:
    RectangularCo(){}
    RectangularCo(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"Rectangular coordinate:"<<"("<<x<<","<<y<<")"<<endl;        
    }
};

class PolarCo{
    int r,theta;
    public:
    PolarCo(){}
    PolarCo(int a,int b){
        r=a;
        theta=b;
    }
     void display(){
        cout<<"Rectangular coordinate:"<<"("<<r<<","<<theta<<")"<<endl;
     }

     operator RectangularCo(){
        int x,y;
        x=r*cos(theta);
        y=r*sin(theta);
        return RectangularCo(x,y);
     }
};

int main(){
    RectangularCo r1;
    PolarCo p1(5,3);
    r1=p1;
    p1.display();
    r1.display();
    return 0;
}