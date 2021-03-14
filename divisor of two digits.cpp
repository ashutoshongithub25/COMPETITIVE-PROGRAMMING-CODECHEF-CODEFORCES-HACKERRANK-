// B. Divisors of Two Integers
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Recently you have received two positive integer numbers x and y. You forgot them, but you remembered a shuffled list containing all divisors of x (including 1 and x) and all divisors of y (including 1 and y). If d is a divisor of both numbers x and y at the same time, there are two occurrences of d in the list.

// For example, if x=4 and y=6 then the given list can be any permutation of the list [1,2,4,1,2,3,6]. Some of the possible lists are: [1,1,2,4,6,3,2], [4,6,1,1,2,3,2] or [1,6,3,2,4,1,2].

// Your problem is to restore suitable positive integer numbers x and y that would yield the same list of divisors (possibly in different order).

// It is guaranteed that the answer exists, i.e. the given list of divisors corresponds to some positive integers x and y.

// Input
// The first line contains one integer n (2≤n≤128) — the number of divisors of x and y.

// The second line of the input contains n integers d1,d2,…,dn (1≤di≤104), where di is either divisor of x or divisor of y. If a number is divisor of both numbers x and y then there are two copies of this number in the list.

// Output
// Print two positive integer numbers x and y — such numbers that merged list of their divisors is the permutation of the given list of integers. It is guaranteed that the answer exists.




#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int max=INT_MIN;
    for(long long int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    set<long long int> one;
    set<long long int> two;
    map<long long int,long long int> mp;
    
     for(long long int i=0;i<n;i++){
       mp[arr[i]]++;
    }
    //  map<int,int>::iterator it;
    //  for(it=mp.begin();it!=mp.end();it++){
    //      if(it->second==1){
    //          one.push_back(it->first);
    //      }
    //      else if(it->second==2){
    //          two.push_back(it->first);
    //      }
    //  }
     long long int maxt=INT_MIN;
    for(long long int i=0;i<n;i++){
        if((max%arr[i])==0 && one.find(arr[i])==one.end()){
            one.insert(arr[i]);
        }
        else{
            if(arr[i]>maxt){
                maxt=arr[i];
            }
            two.insert(arr[i]);
        }
    }
    cout<<max<<" "<<maxt<<endl;
    
}