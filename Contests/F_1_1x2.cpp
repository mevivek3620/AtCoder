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
// ll ans = INT_MIN;
map<pll,ll>mp;

ll helper(ll x,ll y)
{
    if(x>=y)return x-y;

    if(mp.count(make_pair(x,y)) != 0)return mp[make_pair(x,y)];
    ll ans = 0;
    if(y%2 == 0)ans = 1+helper(x,y/2);
    else ans = 2+min(helper(x,(y-1)/2),helper(x,(y+1)/2));
    ans = min(ans,y-x);
    return mp[make_pair(x,y)] = ans;
}

int main()
{
    ll x,y;cin>>x>>y;
    cout<<helper(x,y)<<endl;
    return 0;
}   