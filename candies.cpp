/*
Recently Vova found n candy wrappers. He remembers that he bought x candies during the first day, 2x candies during the second day, 4x candies during the third day, …, 2k−1x candies during the k-th day. But there is an issue: Vova remembers neither x nor k but he is sure that x and k are positive integers and k>1.

Vova will be satisfied if you tell him any positive integer x so there is an integer k>1 that x+2x+4x+⋯+2k−1x=n. It is guaranteed that at least one solution exists. Note that k>1.

You have to answer t independent test cases.
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     long long n;
     cin>>n;
     long long k=2;
     long long x=n%3;
     long long ans=0;
     if(x!=0){
       while(x!=0){
         k++;
         int a=pow(2,k);
         x=n%(a-1);
       }
       int b=pow(2,k);
       ans=n/(b-1);
     }
     else{
        ans=n/3;
     }
 
     cout<<ans<<endl;
 
   }
}