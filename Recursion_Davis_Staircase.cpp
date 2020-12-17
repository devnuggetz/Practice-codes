#include<bits/stdc++.h>
using namespace std;
long long mod= 1e9+7;
int stair(int n){
    long long dp[n+1];
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<n+1;i++)
    dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]);
    return dp[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<stair(n)<<endl;
    }
}