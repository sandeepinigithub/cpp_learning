#include<iostream>
using namespace std;
int main(){
	int x=5;
	bool res = (x==4) || (x++);
	cout<<res<<" "<<x;
	return 0;
}

/*
1 6
--------------------------------
Process exited after 0.2858 seconds with return value 0
Press any key to continue . . .
*/
