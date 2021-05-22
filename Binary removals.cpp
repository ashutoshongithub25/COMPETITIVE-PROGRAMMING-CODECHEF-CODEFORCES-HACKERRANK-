
// B. Binary Removals
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given a string s, consisting only of characters '0' or '1'. Let |s| be the length of s.

// You are asked to choose some integer k (k>0) and find a sequence a of length k such that:

// 1≤a1<a2<⋯<ak≤|s|;
// ai−1+1<ai for all i from 2 to k.
// The characters at positions a1,a2,…,ak are removed, the remaining characters are concatenated without changing the order. So, in other words, the positions in the sequence a should not be adjacent.

// Let the resulting string be s′. s′ is called sorted if for all i from 2 to |s′| s′i−1≤s′i.

// Does there exist such a sequence a that the resulting string s′ is sorted?

// Input
// The first line contains a single integer t (1≤t≤1000) — the number of testcases.

// Then the descriptions of t testcases follow.

// The only line of each testcase contains a string s (2≤|s|≤100). Each character is either '0' or '1'.




#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      string str;
      cin>>str;
       int n=str.length();
       int dp[2][n];
       dp[0][0]=1;
       dp[1][0]=1;
       dp[0][1]=1;
       dp[1][1]=1;
       int ans=0;
       for(int i=2;i<n;i++){
         dp[0][i]=dp[1][i-1];
         if(str[i]=='1'){
            if(dp[0][i-1]==1 || dp[1][i-1]==1){
                dp[1][i]=1;
            }
            else{
                 dp[1][i]=1;
            }
         }
         else{
             int tf=0;
           for(int j=0;j<i;j++){
               if(str[j]=='1' && str[j+1]=='1'){
                   if(dp[0][j]==1 && dp[0][j+1]==1){
                       tf=1;
                       break;
                   }
               }
           }
           if(tf==1){
               dp[1][i]=0;
           }
           else{
               dp[1][i]=1;
           }
        
         }
         
         if(dp[0][i]==0 && dp[1][i]==0){
             ans=1;
         }
       }
      if(ans==1){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"YES"<<endl;
      }
      
  
  }
}