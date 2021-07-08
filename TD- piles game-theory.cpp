#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
cin>>n;
int cards[100];

for(int i=0;i<100;i++){
    cards[i]=i+1;
}
//  for(int i=0;i<10;i++){
//       cout<<cards[i]<<" ";
//     }
//     cout<<endl;
 int newpile[100];
while(n--){
    int a;
    cin>>a;
   int count=0;
    for(int i=0;i<a;i++){
        for(int j=i;j<100;j=j+a){
            //cout<<i<<" "<<j<<endl;
            newpile[count]=cards[j];
            count++;
        }
    }
    
     for(int i=0;i<100;i++){
      cards[i]=newpile[i];
    }
      for(int i=0;i<100;i++){
      cout<<cards[i]<<" ";
    }
    cout<<endl;
}

int idx;
cin>>idx;
cout<<newpile[idx-1]<<endl;
}