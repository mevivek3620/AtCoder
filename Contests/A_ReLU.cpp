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

bool vis[N][N][N];
double dp[N][N][N];

double solve(int a,int b,int c)
{
    if(a >= 100 || b >= 100 || c >= 100)return 0;
    if(vis[a][b][c])return dp[a][b][c];
    vis[a][b][c] = true;
    int k = a + b + c;
    return dp[a][b][c] = 1.0 + 1.0*solve(a+1,b,c)*((a)/(k*1.0)) + 1.0*solve(a,b+1,c)*((b)/(k*1.0)) + 1.0*solve(a,b,c+1)*((c)/(k*1.0)) ;
}

int main()
{
    int x;cin>>x;
    if(x>=0)cout<<x<<endl;
    else cout<<0<<endl;
    return 0;
}   