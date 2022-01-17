#include <bits/stdc++.h>

using namespace std;

class MyDetails {       // The class
  public:             // Access specifier
   long int mobNumber;        // Attribute (int variable)
    string name;  // Attribute (string variable)
};

int main() {
  MyDetails personal;  // Create an object of MyClass

  // Access attributes and set values
  personal.mobNumber = 9559000000; 
  personal.name = "Sandeep Kumar Shukla";

  // Print attribute values
  cout << "Name : "<<personal.name << endl;
  cout << "Mobile Number : "<<personal.mobNumber<<endl;
  return 0;
}