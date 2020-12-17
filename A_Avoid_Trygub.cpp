#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='b')
            {
                swap(s[i],s[k++]);
            }
        }
        cout<<s<<endl;
    }
}