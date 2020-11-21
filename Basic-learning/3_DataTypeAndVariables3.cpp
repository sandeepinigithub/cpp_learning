#include<iostream>
using namespace std;
int main(){
	static int x;
	cout<<x;
	return 0;
}

/********************* Learning ********************

In this case variable x going to stays there throughout the lifetime of the program 
Program has multiple function and every function has its local variable If same function is 
called multiple times, these local variables are created again and again but if you want some local variable 
retain there during the multiple function call . We create static local variable which are created once and stays there till program terminate.

***************************************************/

/********************* Output *********************/
/*
0
--------------------------------
Process exited after 0.4403 seconds with return value 0
Press any key to continue . . .
*/

