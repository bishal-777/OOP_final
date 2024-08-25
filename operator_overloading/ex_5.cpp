//This program adds integer and object.This can be done only by friend function
#include<iostream>
using namespace std;

class Salary{
    int balance;
    public:
    Salary(){}
    Salary(int b){
        balance=b;
    }
    friend Salary operator +(int,Salary);
    void display(){
        cout<<"New salary"<<balance<<endl;
    }
};

Salary operator +(int n,Salary s){
    Salary temp;
    temp.balance=n+s.balance;
    return temp;
}
int main(){
    Salary s1(100000),s2;
    s2=10000+s1;
    s2.display();
    return 0;
}