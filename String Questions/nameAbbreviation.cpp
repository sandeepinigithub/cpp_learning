// Write a program that takes your full name as input and displays the abbreviations of 
// the first and middle names except the last name which is displayed as it is. 
// For example, if your name is Robert Brett Roser, then the output should be R.B.Roser.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string fname,mname,lname;
    cin>>fname>>mname>>lname;
    cout<<fname[0]<<"."<<" "<<mname[0]<<"."<<" "<<lname<<endl;
    return 0;
}