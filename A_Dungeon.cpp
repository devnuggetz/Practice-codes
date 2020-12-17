#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        int mini=min(a,b);
        mini=min(mini,c);
        int modu=sum%9;
        int multi=sum/9;
        if(modu==0&&multi<=mini)
        cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
}