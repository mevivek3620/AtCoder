    #include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define pii pair< int,int >
#define pll pair< ll,ll >
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define N 200003
#define endc "\n"
using namespace std;

int dp[N];

int dfs(int i,vector<bool>&vis,vector<int>a[])
{
    if(dp[i] != -1)return dp[i];
    int ans = 0;
    for(auto x:a[i])
    {
        if(!vis[x])ans = max(ans,1+dfs(x,vis,a));
    }
    return dp[i] = ans;
}

int main()
{
    int n,m;cin>>n>>m;
    vector<bool>vis(n+1,false);
    vector<int>a[n+1];
    f(i,0,m)
    {
        int x,y;cin>>x>>y;
        a[x].pb(y);
    }
    int ans = 0;
    memset(dp,-1,sizeof(dp));
    f(i,1,n+1)
    {
        if(!vis[i])ans = max(ans,dfs(i,vis,a));
    }
    cout<<ans<<endl;
    return 0;
}