//This program changes the sign of input number from positive to negative and vice versa
//Simple use of overloading unary operator
#include<iostream>
using namespace std;
class Change{
    int num;
    public:
    Change(int n){
        num=n;
    }
    void operator -(){
        num=-num;
    }
    void display(){
        cout<<"The changed integer is:"<<num<<endl;
    }
};

int main(){
    Change c1(5);
    -c1;
    c1.display();
    return 0;
}