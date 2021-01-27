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
int h,w;

int main()
{
    int n;cin>>n;
    vl a(1<<n);
    map<ll,ll>mp;
    f(i,0,(1<<n))
    {
        cin>>a[i];
        mp[a[i]]= i+1;
    }
    ll mx = -1,mx1=-1;
    f(i,0,(1<<n)/2)
    {
        mx = max(mx,a[i]);
    }
    f(i,(1<<n)/2,(1<<n)){
        mx1 = max(mx1,a[i]);
    }
    cout<<mp[min(mx1,mx)]<<endl;
    return 0;
}   