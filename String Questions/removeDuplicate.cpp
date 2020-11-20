//Remove Duplicates from string
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,res="",temp;
    cin>>str;
    int hash[123]={0};
    for(int i=0;i<str.length();i++){
        if(hash[str[i]]==0){
            hash[str[i]]=1; //Visited this
            res +=str[i];
            
        }
    }
    cout<<res<<endl;
    return 0;
}