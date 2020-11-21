#include<iostream>
using namespace std;
int x;
int main(){
	int x=10;
	{
		int x=20;
		cout<<x;
	}
	return 0;
}

//We can create same variable multiple times only in different scope or block

/*
20
--------------------------------
Process exited after 0.8415 seconds with return value 0
Press any key to continue . . .
*/
