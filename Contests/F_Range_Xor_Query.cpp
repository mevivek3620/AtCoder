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
#define N 600003
using namespace std;

int BIT[N];

void update(int val,int idx,int n)
{
    for( ; idx<=n ; idx+=(idx&(-idx)) )
    BIT[idx] ^= val;
}

int query(int idx,int n)
{
    int ans = 0;
    for( ; idx>0 ; idx-=(idx&(-idx)) )
    ans ^= BIT[idx];

    return ans;
}

int main()
{
    int n,q;cin>>n>>q;
    vi a(n+1);
    f(i,1,n+1){
        cin>>a[i];
        update(a[i],i,n);
    }
    
    while (q--)
    {
        int t;cin>>t;
        if(t == 1){
            int x,y;cin>>x>>y;
            update(y,x,n);
        }
        else{
            int x,y;cin>>x>>y;
            cout<<(query(y,n)^query(x-1,n))<<endl;
        }
    }
    
    return 0;
}   