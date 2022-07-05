#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i,t1,t2,c=0,x,s=0;
	cin>>n;
	t1=t2=n;

	/*while(t1>0)
	{
		c=c+1;
		t1=t1/10;
	}*/

	//Alternative Loop
	for ( ;t1>0;t1/=10) //initialization can be written as... t1=n
	{
		c++;
	}

	for (i=1;i<=c;i++)
	{
		int y=t2%10;
		x=pow(y,c);
		s+=x;
		t2/=10;
	}
	if (s==n)
	{
		cout<<n<<" is Armstrong."<<endl;
	}
	else
		cout<<n<<" is NOT Armstrong."<<endl;
	return 0;
}