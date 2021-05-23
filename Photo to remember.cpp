#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  int arr[n][2];
  int sum=0;
  int ovmax=0;
  vector<int> v;
  for(int i=0;i<n;i++){
      cin>>arr[i][0]>>arr[i][1];
      sum+=arr[i][0];
      v.push_back(arr[i][1]);
  }
  
  sort(v.begin(),v.end());
  int max=v[v.size()-1];
  int secmax=v[v.size()-2];
  
  for(int i=0;i<n;i++){
      int w=sum-arr[i][0];
      int l=0;
      if(arr[i][1]==max){
          l=secmax;
      }
      else{
          l=max;
      }
      
      cout<<w*l<<" ";
  }
  
}