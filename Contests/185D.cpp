#include <bits/stdc++.h>
#define ll long long
#define MAXN 102
// #define M 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define pii pair< int,int >
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"

using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vi a(m+1,0),b;
    f(i,1,m+1){
        // int x;cin>>x;
        cin>>a[i];
    }
    if(m == 0){
        cout<<1<<endl;
        return 0;
    }
    if(m == n){
        cout<<0<<endl;
        return 0;
    }
    sort(all(a));
    int val = 1e9+69;
    ll ans = 0;
    // if(a[1] != 1)val = a[1]-1;
    f(i,1,m+1){
        if(a[i]-a[i-1]-1)val = min(a[i]-a[i-1]-1,val);
    }
    
    if(a[m] != n)
    {
        val = min(n-a[m],val);
    }
    // cout<<val<<endl;
    f(i,1,m+1){
        if(a[i]-a[i-1]-1)ans += ceil((a[i]-a[i-1]-1)/(val*1.0));
    }
    if(a[m] != n)
    {
        ans += ceil((n-a[m])/(val*1.0));
    }
    cout<<ans<<endl;

    return 0;
}   