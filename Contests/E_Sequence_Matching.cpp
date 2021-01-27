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
#define N 1002
using namespace std;
ll dp[N][N];


int main()
{
    int n,m;cin>>n>>m;
    vl a(n+1),b(m+1);
    f(i,1,n+1)cin>>a[i];
    f(j,1,m+1)cin>>b[j];
    // vl dp(-1)
    f(i,0,n+1)
    {
        f(j,0,m+1){
            if(i == 0 || j==0)dp[i][j] = i+j;
            // else if(i == 0 || j==0)dp[i][j] = i+j+1;
            else dp[i][j] = min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+(a[i]!=b[j])));
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}   