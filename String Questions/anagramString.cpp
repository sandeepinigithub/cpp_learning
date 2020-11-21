//Anagram program - (earth-heart)

#include<bits/stdc++.h>
using namespace std;

bool anagramString(string s1 ,string s2){
    int n1,n2,count;
    n1=s1.length();
    n2=s2.length();
    count=0;
    if(n1==n2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0;i<n1;i++){
            if(s1[i]!=s2[i])
                return false;
        }
        return true;
    }
    else
        return false;
}

int main(){
   //my logic
   string str1,str2;
   
   
   cin>>str1>>str2;
   bool isAnagram = anagramString(str1,str2);
   if(isAnagram == true)
        cout<<"Yes! They are Anagram"<<endl;
    else
        cout<<"No! Not Anagram"<<endl;
   
   return 0; 
}