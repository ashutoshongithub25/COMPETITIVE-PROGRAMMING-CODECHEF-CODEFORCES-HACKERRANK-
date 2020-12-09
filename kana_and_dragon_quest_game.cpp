/*
Kana was just an ordinary high school girl before a talent scout discovered her. Then, she became an idol. But different from the stereotype, she is also a gameholic.

One day Kana gets interested in a new adventure game called Dragon Quest. In this game, her quest is to beat a dragon.


 
The dragon has a hit point of x initially. When its hit point goes to 0 or under 0, it will be defeated. In order to defeat the dragon, Kana can cast the two following types of spells.

Void Absorption
Assume that the dragon's current hit point is h, after casting this spell its hit point will become ⌊h2⌋+10. Here ⌊h2⌋ denotes h divided by two, rounded down.

Lightning Strike
This spell will decrease the dragon's hit point by 10. Assume that the dragon's current hit point is h, after casting this spell its hit point will be lowered to h−10.

Due to some reasons Kana can only cast no more than n Void Absorptions and m Lightning Strikes. She can cast the spells in any order and doesn't have to cast all the spells. Kana isn't good at math, so you are going to help her to find out whether it is possible to defeat the dragon.

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 
    int x,n,m;
    cin>>x>>n>>m;
    int x1=x;
    int n1=n;
    int m1=m;
    int count1=0;
    int count2=0;
    while(n--){
        x=(x/2)+10;
    }
    if(x>0){
    while(m--){
        x=x-10;
    }
    }
   if(x<=0){
       count1=1;
   }
    while(m1--){
        x1=x1-10;
    }
    if(x1>0){
    while(n1--){
        x1=(x1/2)+10;
    }
    }
   if(x1<=0){
       count2=1;
   }
   if(count1==1 || count2==1){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
}
}