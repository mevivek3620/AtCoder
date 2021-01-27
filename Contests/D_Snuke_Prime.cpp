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
#define pll pair< ll,ll >
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define vll vector<pll>
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
#define N 103
using namespace std;
int h,w;

// struct s{
//     ll l,r,c;
// };

// bool cmp(s a,s b)
// {
//     if(a.l == b.l)return a.r<b.r;
//     return a.l>b.l;
// }

int main()
{
    ll n,c;cin>>n>>c;
    map<ll,ll>mp;
    f(i,0,n)
    {
        ll l,r,c;cin>>l>>r>>c;
        mp[l] += c;
        mp[r+1] += -c;
    }
    // cout<<mp[3]<<endl;
    // prefix map
    auto it = mp.begin();
    ll last_val = it->ss;
    it++;
    for(;it != mp.end();it++){
        it->ss += last_val;
        last_val = it->ss;
    }
    
    ll cost = 0,last_day = mp.begin()->ff,last_cost = mp.begin()->ss;
    for(auto it = mp.begin();it != mp.end();it++)
    {
        if(it == mp.begin())continue;
        cost += (it->ff-last_day)*(min(c,last_cost));
        last_day = it->ff;
        last_cost = it->ss;
    }
    cout<<cost<<endl;
    return 0;
}   