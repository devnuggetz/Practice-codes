#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a[6];
    for(int i=0;i<6;i++)
    cin>>a[i];
    sort(a,a+n);
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    sort(b, b+n);
    int max=b[n-1]-a[5];
    int min=b[0]-a[0];
    cout>>max-min>>endl;
}