#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1="qwertyuiop";
    string str2="asdfghjkl;";
    string str3="zxcvbnm,./";
char dir;
cin>>dir;
string str;
cin>>str;
 vector<char> v;
for(int i=0;i<str.length();i++){
    for(int j=0;j<10;j++){
       if(str[i]==str1[j]){
           if(dir=='R'){
               v.push_back(str1[j-1]);
           }
           else{
                v.push_back(str1[j+1]);
           }
       }
       else if(str[i]==str2[j]){
           if(dir=='R'){
               v.push_back(str2[j-1]);
           }
           else{
                v.push_back(str2[j+1]);
           }
       }
       else if(str[i]==str3[j]){
            
           if(dir=='R'){
               v.push_back(str3[j-1]);
           }
           else{
                v.push_back(str3[j+1]);
           }
       
       }
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i];
}
cout<<endl;
 
}