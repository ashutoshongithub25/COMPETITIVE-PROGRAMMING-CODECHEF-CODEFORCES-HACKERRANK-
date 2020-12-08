/*
A. Vasya and Socks
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya has n pairs of socks. In the morning of each day Vasya has to put on a pair of socks before he goes to school. When he comes home in the evening, Vasya takes off the used socks and throws them away. Every m-th day (at days with numbers m, 2m, 3m, ...) mom buys a pair of socks to Vasya. She does it late in the evening, so that Vasya cannot put on a new pair of socks before the next day. How many consecutive days pass until Vasya runs out of socks?
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   vector<int> v;
   for(int i=0;i<n;i++){
     v.push_back(1);
   }
   int i=m-1;
   while(i<v.size()){
     v.push_back(1);
     i=i+m;
   }
   cout<<v.size()<<endl;

}