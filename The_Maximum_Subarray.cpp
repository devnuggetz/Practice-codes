#include<bits/stdc++.h>
using namespace std;
int kadene(int a[],int n){
    int maxi=-10000000;
    int temp=-10000000;
    for(int i=0;i<n;i++)
    {
        temp=max(temp+a[i],a[i]);
        maxi=max(temp,maxi);
    }
    return maxi;
}
int subArraySum(int a[], int n){
    sort(a,a+n);
    if(a[n-1]<0)
    return a[n-1];
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<n+1;i++)
    dp[i]=a[i-1];
    for(int i=1;i<n+1;i++)
    {
        dp[i]=max(dp[i]+dp[i-1],dp[i-1]);
    }
    return dp[n];
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<kadene(a,n)<<" "<<subArraySum(a,n)<<endl;
    }
}