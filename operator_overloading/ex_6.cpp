//This program shows relational operator overloading
#include<iostream>
using namespace std;

class IQ{
    double score;
    public:
    IQ(){}
    IQ(int s){
        score=s;
    }
    friend IQ operator >(IQ,IQ);
    void showdata(){
        if(score>0){
            cout<<"1st person is smarter"<<endl;
        }else{
            cout<<"2nd person is smarter"<<endl;
        }
    }
};

IQ operator >(IQ s1,IQ s2){
    IQ temp;
    if(s1.score>s2.score){
            temp.score=1;
        }else{
            temp.score=0;
        }
    return temp;
}

int main(){
    IQ i1(200),i2(97),i3;
    i3=i1>i2;
    i3.showdata();
    return 0;
}