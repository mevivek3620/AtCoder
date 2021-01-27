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
int n,m;
int x[2] = {1,-1};
int y[2] = {1,-1};
vector<vector<bool>>vis(n,vector<bool>(m,false));
vii a[26];


bool isPossible(int x,int y){
    if(x<0 || x>=n || y<0 || y>=m || vis[x][y])return false;
    return true;
}

int helper(vector<vector<char>>&grid,int x1,int y1,int x2,int y2)
{
    if(x1 == x2 && y1 == y2)return 0;
    vis[x1][y1] = true;
    int time = 1e9;
    f(i,0,2)
    {
        f(j,0,2){
            if(isPossible(x1+x[i],y1+y[j]) && grid[x1+x[i]][y1+y[j]]!='#')
            {
                time = min(time,1+helper(grid,x1+x[i],y1+y[j],x2,y2));
            }
        }
    }
    for(auto x:a[grid[x1][y1]-'a']){
        if(!vis[x.ff][x.ss] && (x.ff!=x1 && x.ss!=y1))time = min(time,1+helper(grid,x.ff,x.ss,x2,y2));
    }
    vis[x1][y1] = false;
    return time;
}

int main()
{
    // int n,m;
    cin>>n>>m;
    vector<vector<char>>grid(n,vector<char>(m));
    int x1,x2,y1,y2;
    f(i,0,n)
    {
        f(j,0,m){
            cin>>grid[i][j];
            if(grid[i][j] == 'S')x1 = i,y1 = j;
            else if(grid[i][j]=='G')x2 =i,y2 =j;
            else if(grid[i][j]!='#')a[grid[i][j]-'a'].pb(make_pair(i,j));
        }
    }
    cout<<helper(grid,x1,y1,x2,y2)<<endl;
    return 0;
}   