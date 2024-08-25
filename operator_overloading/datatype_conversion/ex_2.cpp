//This program turns class type to basic type
#include<iostream>
#define MTF 3.28083
using namespace std;

class Distance{
    int feet,inch;
    public:
    Distance(int f,int i){
        feet=f;
        inch=i;
    }
    operator float(){
        float f=feet+inch/12;
        return(f/MTF);
    }
};

int main(){
    Distance d1(5,11);
    float m;
    m=d1;
    cout<<"The converted distance in meters is: "<<m<<endl;
    return 0;
}