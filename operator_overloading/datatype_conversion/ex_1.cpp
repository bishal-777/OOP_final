//This program converts basic data type to class type
#include<iostream>
#define MTF 3.2803
using namespace std;

class Distance{
    float feet,inch;
    public:
    Distance(){}
    Distance(float m){
        float total=m*MTF;
        feet=int(total);
        inch=(total-feet)*12; 
        inch=int(inch);     
    }

    void showdata(){
        cout<<"The distance in feet and inch is:\t";
        cout<<feet<<"feet"<<" and "<<inch<<"inches"<<endl;
    }

};

int main(){
    float m;
    Distance d1;
    cout<<"Enter distance in meter:\t";
    cin>>m;
    d1=m;
    d1.showdata();
    return 0;
}