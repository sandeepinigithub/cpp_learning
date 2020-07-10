#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter x "<<endl;
	cin>>x;
	cout<<"Enter y"<<endl;
	cin>>y;
	cout<<"Multiplication is : "<<(x*y);
	return 0;
}

/*
Enter x
10
Enter y
20
Multiplication is : 200
--------------------------------
Process exited after 5.594 seconds with return value 0
Press any key to continue . . .
*/

/*
Enter x
10 20
Enter y
Multiplication is : 200
--------------------------------
Process exited after 2.594 seconds with return value 0
Press any key to continue . . .
*/

//Both method of output is correct reason - Buffer.
