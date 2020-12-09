/*
B. Multiply by 2, divide by 6
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an integer n. In one move, you can either multiply n by two or divide n by 6 (if it is divisible by 6 without the remainder).

Your task is to find the minimum number of moves needed to obtain 1 from n or determine if it's impossible to do that.

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
   long long count=0;
   long long n1=n;
   int count2=0;
   int count3=0;
   while(n1%2==0){
       count2++;
       n1=n1/2;
   }
   while(n1%3==0){
       count3++;
       n1=n1/3;
   }
   if(count2>count3){
      count=-1;
   }
   else if(count3>=count2 && n1!=1){
       count=-1;
   }
   else{
    while(n!=1){
        if(n%6==0){
            n=n/6;
        }
        else{
            n=2*n;
        }
        count++;
    }
    
}
cout<<count<<endl;
}

}