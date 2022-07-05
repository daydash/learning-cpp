#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1,x2,y1,y2;
    cin>>x1>>x2;
    cout<<endl;
    cin>>y1,y2;
    if (((x1&&x2&&y1&&y2)>-100)&&((x1&&x2&&y1&&y2)<100))
    {
        float d= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        cout<<d;
    }
    return 0;
}