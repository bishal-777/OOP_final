//This program uses basic concept of inheritance
#include<iostream>
using namespace std;
class Cuboid{
    protected:
    int l,b,h;
    public:
    void getData(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }
};

class Area:public Cuboid{             
    public:
    int tsa(){
        int a=2*(l*b+b*h+l*h);      //total surface area
        return a;
    }  
    int lsa(){
        int a=2*(l+b)*h;            //lateral surface area
        return a;
    }
};

class Volume:public Cuboid{
    public:
    int vol(){
        int v=l*b*h;
        return v;
    }
};

int main(){
    Area c;
    Volume v;
    c.getData(1,2,3);
    v.getData(1,2,3);
    cout<<"Area:\n"<<"Total surface area:\t"<<c.tsa()<<"\nLateral surface area:\t"<<c.lsa()<<endl;
    cout<<"\n\nVolume:"<<v.vol()<<endl;
    return 0;
}