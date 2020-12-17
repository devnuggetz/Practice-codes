#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int first=0, last=n-1;
        while(first<last){
            cout<<a[first++]<<" "<<a[last--]<<" ";
        }
        if(n%2)
        cout<<a[last--];
        cout<<endl;

    }
}