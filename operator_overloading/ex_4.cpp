//overloading binary operator using friend function
#include<iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    friend Complex operator +(Complex,Complex);
    void display();
};

Complex operator +(Complex c1,Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

void Complex::display(){
    cout<<"Added complex number is:\t"<<real<<"+"<<imag<<"i"<<endl;
}

int main(){
    Complex c1(4,5),c2(3,2),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}