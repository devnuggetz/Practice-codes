#include <bits/stdc++.h> 
using namespace std;
#define raftaar ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define in freopen("input.txt","r",stdin);
#define out freopen("out.txt","w",stdout);
#define sublime in out
#define int int64_t
#define rep(i,a,b) for (int i = a; i <= b; ++i)
typedef long double ld;
typedef vector<int> vi;
#define F first 
#define S second 
#define PB push_back 
#define LB lower_bound
#define mp make_pair
typedef pair<int,int> PII;
typedef vector<PII> VII;
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a).size())
bool isprime(int n){for(int i=2;i*i<=n;++i){if(n%i==0){return false;}}return true;}
int factorial(int n){return (n==1 || n==0) ? 1:n*factorial(n-1);} 
int gcd(int a,int b){if (a==0)return b;return gcd(b%a,a);}
int lcm(int a,int b){return (a/gcd(a,b)*b);}
int max(int a,int b){int sol=a>b?a:b;return sol;}
int min(int a,int b){int sol=a<b?a:b;return sol;} 
//int power(int x,int y){int res=1;while(y > 0){ if(y & 1){ans*=x;}y>>=1LL; x*=x;}return ans;}
int inf=100000000001;



inline int solve(){
      int n,k;
      cin>>n>>k;
      int cnt=0;
      for(int i=0;i<n;i+=3){
        if(cnt<n){
          cout<<"a";
          cnt++;
        }
        if(cnt<n){
          cout<<"b";
          cnt++;
        }
        if(cnt<n){
          cout<<"c";
          cnt++;
        }

      }
      cout<<"\n";
      return 0; 

}




 
signed main(){
 
 // sublime;
    raftaar;
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    
    
 
}