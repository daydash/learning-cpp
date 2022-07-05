#include<iostream>
using namespace std;
int main(){
    
    int n,c,i=2,j;
    cin>>n; 
    while (i<=n)
    {
        j=2;
        c=0;
        while (j<=i-1)
        {
            if (i%j==0)
            {
                c=1; //can use c+=1
                break;
            }
            j++; //j+=1 or j=j+1
        }
        if (c==1) //can also use c==0 which are prime
        {
            cout<<i<<" is not prime"<<endl;
        }
        else
        {
            cout<<i<<" is PRIME"<<endl;
        }
        i+=1; //i++
    }
    cout<<endl;
    return 0;
}