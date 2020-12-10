#include <bits/stdc++.h>
using namespace std;
 
int main() {
int k;
cin>>k;
int arr[12];
for(int i=0;i<12;i++){
    cin>>arr[i];
}
sort(arr,arr+12);
int count=0;
int i=11;
int n=0;
int sum=0;
for(int i=0;i<12;i++){
    sum=sum+arr[i];
}
if(sum<k){
    cout<<-1<<endl;
}
 
else{
while(count<k){
    count=count+arr[i];
    n++;
    i--;
}
cout<<n<<endl;
}
}