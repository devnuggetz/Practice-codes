#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ans[n];
        long long ans1=0, ans2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2!=0)
            ans1+=a[i];
            else ans2+=a[i];
        }
        if(ans1>=ans2){
            for(int i=0;i<n;i++){
                if(i%2!=0)
                ans[i]=a[i];
                else ans[i]=1;
            }
        }
        else {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                ans[i]=a[i];
                else ans[i]=1;
            }
        }
        
        for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<endl;

    }
}


