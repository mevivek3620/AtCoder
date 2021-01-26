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
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
using namespace std;

ll dp[100003][103];

ll helper(vl &w,vl &c,int n ,ll W)
{
    if(n == 0)return 0;
    if(dp[W][n] != -1)return dp[W][n];
    if(w[n-1]<=W){
        return dp[W][n] = max(c[n-1]+helper(w,c,n-1,W-w[n-1]),helper(w,c,n-1,W));
    }
    else return dp[W][n] = helper(w,c,n-1,W);
}

int main()
{
    ll n,W;cin>>n>>W;
    vl w(n),c(n);
    memset(dp,-1,sizeof(dp));
    f(i,0,n)
    {
        cin>>w[i]>>c[i];
    }
    cout<<helper(w,c,n,W)<<endl;
    return 0;
}