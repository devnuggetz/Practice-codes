#include<bits/stdc++.h>
using namespace std;
// void solve(int a[][],int n,int ){

// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
        int dp[503][503];
        memset(dp,0,sizeof(dp));
        int ans=0;
        for(int i=n;i>0;i--)
        {for(int j=m;j>0;j--)
        {
            if(a[i-1][j-1]=='*'){
                dp[i][j]++;
                int count=dp[i+1][j-1]+dp[i+1][j]+dp[i+1][j+1];
                count=count/3;
                int temp=min(min(dp[i+1][j-1],dp[i+1][j]),dp[i+1][j+1]);
                dp[i][j]+=temp;
                // cout<<temp<<endl;
            }
            // cout<<a[i][j]<<" ";

        
        }
        // cout<<endl;
        }
        for(int i=n;i>0;i--)
        for(int j=m;j>0;j--)
        {
            ans+=dp[i][j];
        }
        cout<<ans<<endl;
        
    }
}