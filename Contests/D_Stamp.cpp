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
        cin>>a[i];
    }
    if(m == n){
        cout<<0<<endl;
        return 0;
    }
    if(m == 0){
        cout<<1<<endl;
        return 0;
    }
    
    sort(all(a));
    int val = INT_MAX;
    ll ans = 0;
    // if(a[1] != 1)val = a[1]-1;
    f(i,1,m+1){
        if(a[i]-a[i-1]-1){
            val = min(a[i]-a[i-1]-1,val);
            b.pb(a[i]-a[i-1]-1);
        }
    }
    
    if(n-a[m])
    {
        b.pb(n-a[m]);
        val = min(n-a[m],val);
    }
    // cout<<val<<endl;
    for(auto x:b){
        ans += ceil((x)/(1.0*val));
    }
    cout<<ans<<endl;

    return 0;
}   