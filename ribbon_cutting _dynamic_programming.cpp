#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int dp[3][n+1];
	memset(dp,0,sizeof(dp));
	int arr[3];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	sort(arr,arr+3);
	
  for(int i=0;i<3;i++){
      for(int j=0;j<n+1;j++){
          if(i==0){
              if(j%arr[i]==0){
                  dp[i][j]=j/arr[i];
              }
          }
          else if(j<arr[i]){
              dp[i][j]=dp[i-1][j];
          }
          else{
               if(j%arr[i]==0){
                  dp[i][j]=max(j/arr[i],dp[i-1][j]);
              }
            if(j>arr[i]){
               if(dp[i-1][j-arr[i]]>0 || dp[i][j-arr[i]]>0){
              dp[i][j]=max(dp[i-1][j],max(1+dp[i-1][j-arr[i]],1+dp[i][j-arr[i]]));
              }
              else{
                  dp[i][j]=max(dp[i-1][j],dp[i][j-arr[i]]);
              }
              }
             
            
          }
      }
  }
	int ans=max(dp[0][n],max(dp[1][n],dp[2][n]));
	cout<<ans<<endl;
// 	for(int i=0;i<3;i++){
// 	    for(int j=0;j<n+1;j++){
// 	        cout<<dp[i][j]<<" ";
// 	    }
// 	    cout<<endl;
// 	}
	
	//return 0;
}