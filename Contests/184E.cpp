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

int helper(vector<vector<char>>&a,vector<vector<bool>>&vis,int x,int y,int x1,int y1)
{
    if(x==x1 && y==y1)return 0;

    vis[x][y] = true;
    int ans = INT_MAX;
    if(x-1>=0 && !vis[x-1][y] && a[x-1][y] !='#')ans = min(ans,1+helper(a,vis,x-1,y,x1,y1));
    else if(x+1<h && !vis[x+1][y] && a[x+1][y] !='#')ans = min(ans,1+helper(a,vis,x+1,y,x1,y1));
    else if(y-1>=0 && !vis[x][y-1] && a[x][y-1] !='#')ans = min(ans,1+helper(a,vis,x,y-1,x1,y1));
    else if(y+1<w && !vis[x][y+1] && a[x][y+1] !='#')ans = min(ans,1+helper(a,vis,x,y+1,x1,y1));
    vis[x][y] = false;
    if(ans == INT_MAX)return -1;
    return ans;
}

int main()
{
    int x,y,x1,y1;cin>>h>>w;
    vector<vector<char>>a(h,vector<char>(w));
    vector<vector<bool>>vis(h,vector<bool>(w,false));
    f(i,0,h)
    {
        f(j,0,w){
            cin>>a[i][j];
            if(a[i][j] == 'S')x=i,y=j;
            if(a[i][j] == 'G')x1=i,y1=j;
        }
    }
    cout<<helper(a,vis,x,y,x1,y1)<<endl;
    return 0;
}   