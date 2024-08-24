//overloading binary operator
#include<iostream>
using namespace std;

class Time{
    int hr,min,sec;
    public:
    Time(){
        hr=0;
        min=0;
        sec=0;
    }
    Time(int h,int m,int s){
        hr=h;
        min=m;
        sec=s;
    }

    Time operator +(Time t){
        Time temp;
        int a;
        a=(hr+t.hr)*60*60+(min+t.min)*60+sec+t.sec;
        temp.hr=a/(60*60);
        temp.min=(a-temp.hr*60*60)/60;
        temp.sec=(a-temp.hr*60*60-temp.min*60);
        return temp;
    }
    void display(){
        cout<<hr<<"hrs"<<min<<"mins"<<sec<<"secs"<<endl;
    }
};

int main(){
    Time t1(5,40,51),t2(4,31,42),t3;
    t3=t1+t2;
    t3.display();
    return 0;
};