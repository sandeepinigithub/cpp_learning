//Longest Common Subsequence 
#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int n1, int n2){
    if(n1==0 || n2==0)
        return 0;
    else if(s1[n1-1]==s2[n2-1])
        return 1 + LCS(s1,s2,n1-1,n2-1);
    else
       return max(LCS(s1,s2,n1-1,n2) , LCS(s1,s2,n1,n2-1));
}

int main(){
    string str1,str2;
    int n1,n2;
    cin>>str1>>str2;
    n1=str1.length();
    n2=str2.length();
    cout<<LCS(str1,str2,n1,n2)<<endl;
    
    return 0;
}