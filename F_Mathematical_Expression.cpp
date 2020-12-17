#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n, string s){
    cout<<a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            int found=-1;
            found = s.find('+');
            if(found!=-1)
            cout<<"+";
            else{
                found =-1;
                found = s.find('*');
                if(found!=-1)
                cout<<"*";
                else cout<<"-";
            }
            cout<<a[i];
        }else if(a[i]==0){
            int found=-1;
            found = s.find('+');
            if(found!=-1)
            cout<<"+";
            else{
                found =-1;
                found = s.find('-');
                if(found!=-1)
                cout<<"-";
                else cout<<"*";
            }
            cout<<a[i];
        }else{
            if(a[i-1]==1)
            {
             int found=-1;
            found = s.find('+');
            if(found!=-1)
            cout<<"+";
            else{
                found =-1;
                found = s.find('*');
                if(found!=-1)
                cout<<"*";
                else cout<<"-";
            }   
            }else if(a[i-1]==0){
                int found=-1;
                found = s.find('+');
                if(found!=-1)
                cout<<"+";
                else{
                found =-1;
                found = s.find('-');
                if(found!=-1)
                cout<<"-";
                else cout<<"*";
            }   
            }
            
            else{
            int found=-1;
            found = s.find('*');
            if(found!=-1)
            cout<<"*";
            else{
                found =-1;
                found = s.find('+');
                if(found!=-1)
                cout<<"+";
                else cout<<"-";
            }
        }
            cout<<a[i]; 
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    string s;
    cin>>s;
    solve(a,n,s);
}