//This program shows member function overriding in inheritance
#include<iostream>
using namespace std;
class Student1{
    protected:
    int roll;
    public:
    void getdata(){
        cout<<"Enter roll no of student 1:"<<endl;
        cin>>roll;
    }
    void showdata(){
        cout<<"The roll no of student 1 is "<<roll<<endl;
    }
};
class Student2:protected Student1{
    public:
    void getdata(){
        cout<<"Enter roll no of student 2:"<<endl;
        cin>>roll;
    }
    void showdata(){
        cout<<"The roll no of student 2 is "<<roll<<endl;
    }
};
int main(){
    Student2 s;
    s.getdata();
    s.showdata();
    return 0;
}