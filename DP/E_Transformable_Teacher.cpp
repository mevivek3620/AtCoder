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


int main()
{
    int n,m;cin>>n>>m;
    vl h(n),w(m);
    f(i,1,n+1)cin>>h[i];
    f(i,1,m+1)cin>>w[i];

    vl pre(n/2+1),suf(n/2+1);
    
    return 0;
}