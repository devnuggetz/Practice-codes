#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int flag;
        vector<pair<int, int> >v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
            // cout<<v[i].first<<endl;
        }
        for(int i=0;i<n;i++)
        {
            flag=1;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                continue;
                int temp=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
                if((temp)>k)
                flag=-1;
                // cout<<temp<<endl;
            }
            if(flag==1)
            break;
        }
        cout<<flag<<endl;
    }
}