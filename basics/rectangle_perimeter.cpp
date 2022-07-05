#include<iostream>
using namespace std;
int main(){
    int L,B;
    cin>>L>>B;
    if ((L>0&&L<1000)&&(B>0&&B<1000))
    {
        int p=2*(L+B);
        cout<<p;
    }
    
}