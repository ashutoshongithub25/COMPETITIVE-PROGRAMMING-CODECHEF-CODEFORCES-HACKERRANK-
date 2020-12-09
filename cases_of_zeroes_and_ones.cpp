/*
A. Case of the Zeros and Ones
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Andrewid the Android is a galaxy-famous detective. In his free time he likes to think about strings containing zeros and ones.

Once he thought about a string of length n consisting of zeroes and ones. Consider the following operation: we choose any two adjacent positions in the string, and if one them contains 0, and the other contains 1, then we are allowed to remove these two digits from the string, obtaining a string of length n - 2 as a result.

Now Andreid thinks about what is the minimum length of the string that can remain after applying the described operation several times (possibly, zero)? Help him to calculate this number.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int count1=0;
int count0=0;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        count1++;
    }
    else{
        count0++;
    }
}
cout<<abs(count0-count1)<<endl;
}