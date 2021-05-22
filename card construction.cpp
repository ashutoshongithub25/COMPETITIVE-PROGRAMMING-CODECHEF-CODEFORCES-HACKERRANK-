// B. Card Constructions
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// A card pyramid of height 1 is constructed by resting two cards against each other. For h>1, a card pyramid of height h is constructed by placing a card pyramid of height h−1 onto a base. A base consists of h pyramids of height 1, and h−1 cards on top. For example, card pyramids of heights 1, 2, and 3 look as follows:


// You start with n cards and build the tallest pyramid that you can. If there are some cards remaining, you build the tallest pyramid possible with the remaining cards. You repeat this process until it is impossible to build another pyramid. In the end, how many pyramids will you have constructed?


#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  map<long long int,int> mp;
  long long int a=2;
  mp[2]=1;
  long long int k=2;
  while(a<=1000000000){
      long long int z=(a+(k-1))+(2*k);
      mp[z]=k;
      a=z;
      k++;
  }
//   map<long long int,int>::iterator it;
//   for(it=mp.begin();it!=mp.end();it++){
//       cout<<it->first<<" ";
//   }
//   cout<<endl;
 
  
  while(t--){
     long long int n;
     cin>>n;
     if(n==1){
         cout<<0<<endl;
     }
     else{
      if(mp.find(n)!=mp.end()){
          cout<<1<<endl;
      }
      else{
          int count=0;
          while(n>1){
              
              if(mp.find(n)!=mp.end()){
                  count++;
                  break;
              }
         map<long long int,int>::iterator elt = mp.lower_bound(n);
         if(elt != mp.begin()) {
               --elt;
    
         }
         count++;
        n=n-(elt->first);
       // cout<<n<<endl;
    }
    cout<<count<<endl;
   }
     }
  }
}