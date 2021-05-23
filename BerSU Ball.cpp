// B. BerSU Ball
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// The Berland State University is hosting a ballroom dance in celebration of its 100500-th anniversary! n boys and m girls are already busy rehearsing waltz, minuet, polonaise and quadrille moves.

// We know that several boy&girl pairs are going to be invited to the ball. However, the partners' dancing skill in each pair must differ by at most one.

// For each boy, we know his dancing skills. Similarly, for each girl we know her dancing skills. Write a code that can determine the largest possible number of pairs that can be formed from n boys and m girls.

// Input
// The first line contains an integer n (1 ≤ n ≤ 100) — the number of boys. The second line contains sequence a1, a2, ..., an (1 ≤ ai ≤ 100), where ai is the i-th boy's dancing skill.

// Similarly, the third line contains an integer m (1 ≤ m ≤ 100) — the number of girls. The fourth line contains sequence b1, b2, ..., bm (1 ≤ bj ≤ 100), where bj is the j-th girl's dancing skill.



#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 
 int m;
 cin>>m;
 int brr[m];
 for(int i=0;i<m;i++){
     cin>>brr[i];
 }
 
 sort(arr,arr+n);
 sort(brr,brr+m);
 
 int dp[n][m];
 memset(dp,0,sizeof(dp));
int c1=0;
 for(int i=0;i<n;i++){
     if(abs(arr[i]-brr[0])<=1){
         dp[i][0]=1;
         c1++;
     }
     else if(c1>0){
          dp[i][0]=1;
     }
     else{
          dp[i][0]=0;
     }
 }
 
//   for(int i=0;i<n;i++){
//      for(int j=0;j<m;j++){
//         cout<<dp[i][j]<<" ";
//      }
//      cout<<endl;
//  }
 
     c1=0;
 for(int i=0;i<m;i++){
     if(abs(brr[i]-arr[0])<=1){
         dp[0][i]=1;
         c1++;
     }
     else if(c1>0){
          dp[0][i]=1;
     }
     else{
          dp[0][i]=0;
     }
 }
 
 for(int i=1;i<n;i++){
     for(int j=1;j<m;j++){
         if(abs(arr[i]-brr[j])<=1){
             dp[i][j]=dp[i-1][j-1]+1;
         }
         else{
             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
         }
     }
 }
 
//  for(int i=0;i<n;i++){
//      for(int j=0;j<m;j++){
//         cout<<dp[i][j]<<" ";
//      }
//      cout<<endl;
//  }
 
 cout<<dp[n-1][m-1]<<endl;
 
 
 
}