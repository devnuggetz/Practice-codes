#include<bits/stdc++.h>
using namespace std;
bool isSubstring(string s)
{
    int n=s.length();
    // string s2="2020";
    // int dp[n+1][5];
    // int maxi=0;
    // for(int i=0;i<n+1;i++)
    // for(int j=0;j<5;j++)
    // {
    //     if(i==0||j==0)
    //     dp[i][j]=0;
    //     else{
    //         if(s[i-1]==s2[j-1])
    //         {
    //             dp[i][j]=1+dp[i-1][j-1];
    //             maxi=max(maxi,dp[i][j]);
    //         }
            
    //         else dp[i][j]=0;
    //     }
    // }

    // if(maxi==4)
    // return true;
    if(s[0]=='2'&&s[1]=='0'&&s[n-1]=='0'&&s[n-2]=='2')
    return true;
    if(s[0]=='2'&&s[n-3]=='0'&&s[n-1]=='0'&&s[n-2]=='2')
    return true;
    if(s[0]=='2'&&s[1]=='0'&&s[n-1]=='0'&&s[2]=='2')
    return true;
    if(s[0]=='2'&&s[1]=='0'&&s[3]=='0'&&s[2]=='2')
    return true;
    if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-1]=='0'&&s[n-2]=='2')
    return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int y;
        cin>>y;
        string s;
        cin>>s;
        if(isSubstring(s))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}