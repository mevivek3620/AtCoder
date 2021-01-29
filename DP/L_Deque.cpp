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

ll dp[3003][3003][2];
ll ans = 0;
vl temp;

ll helper(vl& a,int l,int r,int turn)
{
    // if(l > r)return 0;
    if(l == r){
        if(turn == 0)return a[l];
        return -a[r];
    }
    if(dp[l][r][turn] != -1)return dp[l][r][turn];
    if(turn == 0){
        return dp[l][r][turn] = max(helper(a,l+1,r,1)+a[l],helper(a,l,r-1,1)+a[r]);
    }
    else{
        return dp[l][r][turn] = min(helper(a,l+1,r,0)-a[l],helper(a,l,r-1,0)-a[r]);
    }
}


int main()
{
    ll n,W;cin>>n;
    vl a(n);
    memset(dp,-1,sizeof(dp));
    f(i,0,n)
    {
        cin>>a[i];
    }
    cout<<helper(a,0,n-1,0)<<endl;
    // for(auto x:temp)cout<<x<<endl;
    // cout<<*max_element(all(temp))<<endl;
    return 0;
}