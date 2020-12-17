#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
        int count=0;
        if(n==3)
        {
           for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
               if(j<=n-3&&a[i][j]=='X'&&a[i][j+1]=='X'&&a[i][j+2]=='X')
               {
                   count++;
                   a[i][j+1]='O';
               }
               
               if(i<=n-3&&a[i][j]=='X'&&a[i+1][j]=='X'&&a[i+2][j]=='X')
               {
                   count++;
                   a[i+1][j]='O';
               }
           }
        }
       
        }
        else
        for(int i=n-1;i>=0;i--)
        {
           for(int j=n-1;j>=0;j--)
           {
               if(j>=2&&a[i][j]=='X'&&a[i][j-1]=='X'&&a[i][j-2]=='X')
               {
                   count++;
                   a[i][j-2]='O';
               }
               
               if(i>=2&&a[i][j]=='X'&&a[i-1][j]=='X'&&a[i-2][j]=='X')
               {
                   count++;
                   a[i-2][j]='O';
               }
           }
        }
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<a[i][j];
            cout<<endl;
        }
        // cout<<count<<endl;
    }
}