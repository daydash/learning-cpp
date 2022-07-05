//    1
//   232
//  34543
// 4567654
//567898765

#include<iostream>
using namespace std;
int main(){

    int N,row=1,col,i,j,number;
    cin>>N;

    while (row<=N)
    {
        j=N-row;
        col=1;
        while (col<=j)
        {
            cout<<' ';
            col+=1;
        }
        i=1;
        number=row;
        while (i<=row)
        {
            cout<<number;
            number+=1;
            i+=1;
        }
        i=1,number=2*row-1;     //wrote i=1; and number=2*row-1; together
        while (i<=row-1)
        {      
        
            cout<<number;
            number-=1;
            i+=1;
        }
        cout<<endl;
        row+=1;
    }
    

    cout<<endl;
    return 0;
}