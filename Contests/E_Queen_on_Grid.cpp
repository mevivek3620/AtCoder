#include <bits/stdc++.h>
#define ll long long
#define MAXN 102
#define M 1000000007
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
#define N 2003
using namespace std;

int dp[N][N];
int x[N][N]; 
//this gives us the number of moves from i,j to h,w via horizontally dir
int y[N][N];
int z[N][N];

int main()
{
    int h,w;cin>>h>>w;
    vector<string>s(h);
    // vector<vector<bool>>vis(h,vector<bool>(w,false));
    f(i,0,h)cin>>s[i];
    dp[0][0] = 1;
    f(i,0,h)
    {
        f(j,0,w)
        {
            if(i==0 && j==0)continue;
            if(s[i][j] == '#')continue;
            if(j>0)x[i][j] = (x[i][j-1] + dp[i][j-1])%M;
            if(i>0)y[i][j] = (y[i-1][j] + dp[i-1][j])%M; 
            if(i>0 && j>0)z[i][j] = (z[i-1][j-1] + dp[i-1][j-1])%M;
            dp[i][j] = ((ll)x[i][j] + y[i][j] + z[i][j])%M;
        }
    }
    cout<<dp[h-1][w-1]<<endl;
    return 0;
}   