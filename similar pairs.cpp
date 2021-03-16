// C. Similar Pairs
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// We call two numbers x and y similar if they have the same parity (the same remainder when divided by 2), or if |x−y|=1. For example, in each of the pairs (2,6), (4,3), (11,7), the numbers are similar to each other, and in the pairs (1,4), (3,12), they are not.

// You are given an array a of n (n is even) positive integers. Check if there is such a partition of the array into pairs that each element of the array belongs to exactly one pair and the numbers in each pair are similar to each other.

// For example, for the array a=[11,14,16,12], there is a partition into pairs (11,12) and (14,16). The numbers in the first pair are similar because they differ by one, and in the second pair because they are both even.

// Input
// The first line contains a single integer t (1≤t≤1000) — the number of test cases. Then t test cases follow.

// Each test case consists of two lines.

// The first line contains an even positive integer n (2≤n≤50) — length of array a.

// The second line contains n positive integers a1,a2,…,an (1≤ai≤100).

// Output
// For each test case print:

// YES if the such a partition exists,
// NO otherwise.
// The letters in the words YES and NO can be displayed in any case.



#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int evecount=0;
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evecount++;
        }
        else{
            oddcount++;
        }
    }
    if((evecount%2==0) && (oddcount%2==0)){
        cout<<"YES"<<endl;
    }
    else{
        int count=0;
        int j=1;
        for(int i=0;i<n;i++){
            if((arr[j]-arr[i]==1) && ((arr[j]%2==0 && arr[i]%2!=0) || (arr[j]%2!=0 && arr[i]%2==0))){
                count=1;
                break;
            }
            j++;
        }
        
        if(count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
        
    }
}