#include<iostream>
using namespace std;
int x;
int main(){
	int y;
	cout<<"x is 0 , Because it is globally declared"<<endl;
	cout<<"y is random value , Because it is locally declared" <<endl;
	cout<<"x : "<<x<<endl;
	cout<<"y : "<<y<<endl;
	return 0;	
}

/*
x is 0 , Because it is globally declared
y is random value , Because it is locally declared
x : 0
y : 4248971

--------------------------------
Process exited after 0.2469 seconds with return value 0
Press any key to continue . . .
*/
