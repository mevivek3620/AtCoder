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

// ll dp[N];

ll helper(vector<string>&s,int n,int m,int i,int j)
{
    if( i==n-1 && j == m-1)return 1;
    if(i>=n || j>=m || i<0 || j<0 || s[i][j] =='#')return 0;
    return ((helper(s,n,m,i+1,j)%M)+(helper(s,n,m,i,j+1)%M))%M;
}

int main()
{
    int n,m;cin>>n>>m;
    // vector<bool>vis(n+1,false);
    bool vis[n][m];
    memset(vis,false,sizeof(vis));
    vector<string>s(n);
    f(i,0,n)
    {
        cin>>s[i];
    }
    cout<<helper(s,n,m,0,0)<<endl;
    return 0;
}