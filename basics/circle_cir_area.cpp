#include<iostream>
using namespace std;
int main(){
    int D;
    cin>>D;
    float r=D/2.00,pi=3.14;
    if (D>0&&D<1000)
    {
        float c=2*pi*r,a=pi*r*r;
        cout<<c<<endl<<a;
    }
}