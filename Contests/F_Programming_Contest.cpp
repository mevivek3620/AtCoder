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
#define pll pair< ll,ll >
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
#define N 103
using namespace std;

int ans = 0;
map<pll,ll>dp;

int helper(vl &a,ll n,ll t,ll curr)
{
    if(n == 0){
        if(curr > t)return 0;
        return curr;
    }
    // if(dp.count(make_pair(n,curr)) != 0)return dp[make_pair(n,curr)];
    if(a[n-1]+curr<=t)return  max(helper(a,n-1,t,curr+a[n-1]),helper(a,n-1,t,curr));
    return  helper(a,n-1,t,curr);
}

int main()
{
    ll n,t;cin>>n>>t;
    vl a(n);
    f(i,0,n)cin>>a[i];
    cout<<helper(a,n,t,0)<<endl;
    return 0;
}   