#include<bits/stdc++.h>
using namespace std;
void coinChange(int a[], int n, int k)
{
    long long dp[n+1][k+1];
    for(int i=0;i<n+1;i++)
    for(int j=0;j<k+1;j++)
    {
        if(i==0)
        dp[i][j]=0;
        if(j==0)
        dp[i][j]=1;
    }
    for(int i=1;i<n+1;i++)
    for(int j=1;j<k+1;j++)
    {
        if(a[i-1]<=j)
        {
            dp[i][j]=(dp[i][j-a[i-1]]+dp[i-1][j]);
        }
        else dp[i][j]=dp[i-1][j];
    }
    cout<<dp[n][k];
}
int main(){
    int k,n;
    cin>>k>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    coinChange(a,n,k);
}