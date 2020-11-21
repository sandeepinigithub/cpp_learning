#include<iostream>
using namespace std;
int main(){
	int x=1,y=2,z=3,a;
	a=(x,y,z);  //Comma Operator
//	a=x,y,z; // a=1 here
	cout<<a;
	return 0;
}

/*
  Comma Operator : 
  1.Lowest precedence
  2.Binary Operator
  3.First evaluate the first value then evaluate the second value , Result of the evaluation is second value.
  4.When we use it multiple time associativity comes into the picture , it has left to right associativity.
		   
*/

/*
3
--------------------------------
Process exited after 0.3226 seconds with return value 0
Press any key to continue . . .
*/
