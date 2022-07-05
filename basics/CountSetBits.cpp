#include <iostream>
using namespace std;

int main(){
	
	int mask=1;
	int no=10;
	int set_bitCount = 0;
	
	for(int i=1; i<=31; i++){
        if((no&mask)>0){
            set_bitCount++;
        }
        mask=mask*2;
    }
	cout<<"Set Bits: "<<set_bitCount;
	cout<<endl;
	return 0;
}