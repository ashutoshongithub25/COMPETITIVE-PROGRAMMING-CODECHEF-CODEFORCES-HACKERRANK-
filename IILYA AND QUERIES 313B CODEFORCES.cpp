// B. Ilya and Queries
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Ilya the Lion wants to help all his friends with passing exams. They need to solve the following problem to pass the IT exam.

// You've got string s = s1s2... sn (n is the length of the string), consisting only of characters "." and "#" and m queries. Each query is described by a pair of integers li, ri (1 ≤ li < ri ≤ n). The answer to the query li, ri is the number of such integers i (li ≤ i < ri), that si = si + 1.

// Ilya the Lion wants to help his friends but is there anyone to help him? Help Ilya, solve the problem.

// Input
// The first line contains string s of length n (2 ≤ n ≤ 105). It is guaranteed that the given string only consists of characters "." and "#".

// The next line contains integer m (1 ≤ m ≤ 105) — the number of queries. Each of the next m lines contains the description of the corresponding query. The i-th line contains integers li, ri (1 ≤ li < ri ≤ n).

// Output
// Print m integers — the answers to the queries in the order in which they are given in the input.



#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string str;
    cin>>str;
   vector<int> v;
    
    for(int i=0;i<str.length()-1;i++){
        if(str[i]==str[i+1]){
            v.push_back(1);
        }
        else{
            v.push_back(0);
        }
    }
 
    int prefix[v.size()];
    memset(prefix,0,sizeof(v.size()));
    int sum=0;
    for(int i=0;i<v.size();i++){
        prefix[i]=v[i]+sum;
        sum=prefix[i];
    }
 
    int n;
    cin>>n;
    while(n--){
       int l,r;
       cin>>l>>r;
      l=l-1;
      r=r-1;
       if(l==0){
          
           cout<<prefix[r-1]<<endl;
       }
      else{
           int ans=prefix[r-1]-prefix[l-1];
           cout<<ans<<endl;
      }
       
    }
    
    
}