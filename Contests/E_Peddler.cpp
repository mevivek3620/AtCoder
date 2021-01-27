#include <bits/stdc++.h>
#define ll long long
#define MAXN 102
// #define M 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
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
#define N 103
using namespace std;
// ll ans = INT_MIN;

int main()
{
    int n,m;cin>>n>>m;
    vector<bool>vis(n+1,false);
    vl a(n+1),high(n+1,-1e9);
    f(i,1,n+1)
    {
        cin>>a[i];
    }
    vi adj[n+1];
    f(i,0,m){
        int x,y;cin>>x>>y;
        adj[x].pb(y);
    }

    ll ans = -1e9;
    fd(i,n,1){
        for(auto x:adj[i])
        {
            high[i] = max(high[i],high[x]);
        }
        ans = max(ans,high[i]-a[i]);
        high[i] = max(high[i],a[i]);
    }
    cout<<ans<<endl;

    return 0;
}   