#include<iostream>
using namespace std;
class rectangle
{
private:
    int length=0,breadth=0;
public:
    void setLength(int l){
        if(l>=0)
    length=l;
    else
        cout<<"length cannot be negative"<<endl;

    }
    void setBreadth(int b){
        if(b>=0)
    breadth=b;
    else
        cout<<"breadth cannot be negative"<<endl;
    }
    int getLength(){
    return length;
    }
    int getBreadth(){
    return breadth;
    }
    int area(){
    return length*breadth;
    }
};

int main(){
rectangle r;
r.setLength(91);
r.setBreadth(3);
cout<<r.area()<<endl;
}