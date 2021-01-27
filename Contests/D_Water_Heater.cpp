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
#define N 103
using namespace std;

vi ans;
void dfs(int src,int sum,vector<pair<int,int>>a[],vector<bool>&vis)
{
    vis[src] = true;
    for(auto x:a[src])
    {
        if(!vis[x.ff]){
            dfs(x.ff,(sum+x.ss),a,vis);
        }
    }
    // ans = 0;
    ans.pb(sum+a[src][0].ss);
    vis[src] = false;
}

int main()
{
    int n,w;cin>>n>>w;
    vl a(200003,0);
    f(i,0,n)
    {
        int x,y;ll t;cin>>x>>y>>t;
        a[x] += t;
        a[y] -= t;
    }
    int f=0;
    if(a[0]>w)f=1;
    f(i,1,200003){
        a[i] =a[i]+a[i-1];
        if(a[i]>w){
            // cout<<a[i]<<endl;
            f=1;break;
        }
    }

    if(f==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}   