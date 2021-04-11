// B. Sail
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// The polar bears are going fishing. They plan to sail from (sx, sy) to (ex, ey). However, the boat can only sail by wind. At each second, the wind blows in one of these directions: east, south, west or north. Assume the boat is currently at (x, y).

// If the wind blows to the east, the boat will move to (x + 1, y).
// If the wind blows to the south, the boat will move to (x, y - 1).
// If the wind blows to the west, the boat will move to (x - 1, y).
// If the wind blows to the north, the boat will move to (x, y + 1).
// Alternatively, they can hold the boat by the anchor. In this case, the boat stays at (x, y). Given the wind direction for t seconds, what is the earliest time they sail to (ex, ey)?

// Input
// The first line contains five integers t, sx, sy, ex, ey (1 ≤ t ≤ 105,  - 109 ≤ sx, sy, ex, ey ≤ 109). The starting location and the ending location will be different.

// The second line contains t characters, the i-th character is the wind blowing direction at the i-th second. It will be one of the four possibilities: "E" (east), "S" (south), "W" (west) and "N" (north).

// Output
// If they can reach (ex, ey) within t seconds, print the earliest time they can achieve it. Otherwise, print "-1" (without quotes).

#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int t,sx,sy,ex,ey;
  cin>>t>>sx>>sy>>ex>>ey;
  string str;
  cin>>str;
  if(sx==ex && sy==ey){
      cout<<0<<endl;
  }
  else if(sy==ey && ex>sx){
     // cout<<"a"<<endl;
      long long int count=0;
      int flag=0;
      for(int i=0;i<str.length();i++){
          if(str[i]=='E'){
              count++;
              sx++;
              if(sx==ex){
                  flag=i+1;
                  break;
              }
          }
      }
      if(flag!=0){
          cout<<flag<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
   else if(sy==ey && ex<sx){
      // cout<<"b"<<endl;
      int count=0;
      int flag=0;
      for(int i=0;i<str.length();i++){
          if(str[i]=='W'){
              count++;
              sx--;
              if(sx==ex){
                  flag=i+1;
                  break;
              }
          }
      }
      if(flag!=0){
          cout<<flag<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
  else if(sx==ex && sy<ey){
     // cout<<"c"<<endl;
       int count=0;
      int flag=0;
      for(int i=0;i<str.length();i++){
          if(str[i]=='N'){
              count++;
              sy++;
              if(sy==ey){
                  flag=i+1;
                  break;
              }
          }
      }
      if(flag!=0){
          cout<<flag<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
  else if(sx==ex && sy>ey){
     // cout<<"d"<<endl;
       int count=0;
      int flag=0;
      for(int i=0;i<str.length();i++){
          if(str[i]=='S'){
              count++;
              sy--;
              if(sy==ey){
                  flag=i+1;
                  break;
              }
          }
      }
      if(flag!=0){
          cout<<flag<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
  else if(ex>sx && ey>sy){
   //   cout<<"e"<<endl;
   //cor1
      int i=0;
      int count=0;
      while(((ex>=sx && ey>sy) || (ex>sx && ey>=sy)) && i<str.length()){
          if(str[i]=='E' && sx!=ex){
              sx++;
            
          }
          else if(str[i]=='N' && sy!=ey){
              sy++;
             
          }
           count++;
         i++; 
      }
      //cout<<sx<<" "<<sy<<endl;
      if(ex==sx && sy==ey){
          cout<<count<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
  else if(sx>ex && ey>sy){
     // cout<<"f"<<endl;
     //cor2
        int i=0;
      int count=0;
      while(((sx>=ex && ey>sy) || (sx>ex && ey>=sy)) && i<str.length()){
          if(str[i]=='W' && sx!=ex){
              sx--;
             
          }
          else if(str[i]=='N' && sy!=ey){
              sy++;
              
          }
         // cout<<sx<<" "<<sy<<endl;
           count++;
         i++; 
      }
      if(ex==sx && sy==ey){
          cout<<count<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
  else if(ex>sx && sy>ey){
    //  cout<<"g"<<endl;
    
        int i=0;
      int count=0;
      while(((ex>=sx && sy>ey) || (ex>sx && sy>=ey)) && i<str.length()){
          if(str[i]=='E' && sx!=ex){
              sx++;
              
          }
          else if(str[i]=='S' && sy!=ey){
              sy--;
              
          }
           count++;
         i++; 
      }
      if(ex==sx && sy==ey){
          cout<<count<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
  else if(sx>ex && sy>ey){
    //  cout<<"h"<<endl;
        int i=0;
      int count=0;
      while(((sx>=ex && sy>ey) || (sx>ex && sy>=ey)) && i<str.length()){
          if(str[i]=='W' && sx!=ex){
              sx--;
            
          }
          else if(str[i]=='S' && sy!=ey){
              sy--;
              
          }
           count++;
         i++; 
      }
      if(ex==sx && sy==ey){
          cout<<count<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
  
}