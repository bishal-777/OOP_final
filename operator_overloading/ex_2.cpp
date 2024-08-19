//This program overloads unary operator by using friend function
#include<iostream>
using namespace std;

class change{
    int num;
    public:
    change(){
        num=0;
    }
    change(int n){
        num=n;
    }
    friend change operator -(change);
    void display(){
        cout<<"The changed integer is:"<<num<<endl;
    }
};

change operator -(change c){
    change c0;
    c0.num=-c.num;
    return c0;
}

int main(){
    change c1(5),c2;
    c2=-c1;
    c2.display();
    return 0;
}
