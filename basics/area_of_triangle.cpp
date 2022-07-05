#include<iostream>
using namespace std;
int main(){
    int B,H;
    cin>>H>>B;
    if ((H>0&&H<1000)&&(B>0&&B<1000))
    {
        int a=H*B/2;
        cout<<a;
    }
    
}