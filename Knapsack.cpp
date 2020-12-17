#include<bits/stdc++.h>
using namespace std;
void knapsack(int a[],int n, int k){
    int dp[n+1][k+1];
     for(int i=0;i<n+1;i++)
    for(int j=0;j<k+1;j++){
        if(i==0||j==0)
        dp[i][j]=0;
    }

    for(int i=1;i<n+1;i++)
    for(int j=1;j<k+1;j++)
    {
            if(a[i-1]<=j)
            {
                dp[i][j]=max((a[i-1]+dp[i][j-a[i-1]]),dp[i-1][j]);
            }
            else dp[i][j]=dp[i-1][j];
    }
    cout<<dp[n][k]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        knapsack(a,n,k);
    }
}