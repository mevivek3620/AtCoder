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
#define N 103
using namespace std;


int main()
{
    int h,w,n,m;cin>>h>>w>>n>>m;
    int grid[h][w];
    vii a;
    memset(grid,0,sizeof(grid));
    f(i,0,n){
        int x,y;cin>>x>>y;
        x--;y--;
        a.pb(make_pair(x,y));
        grid[x][y] = 1;
    }
    f(i,0,m){
        int x,y;cin>>x>>y;
        x--;y--;
        grid[x][y] = -1;
    }
    sort(all(a));
    f(i,0,a.size())
    {
        int x = a[i].ff,y = a[i].ss;
        // going upwards
        fd(j,x-1,0){
            if(grid[j][y] == -1)break;
            grid[j][y] = 1;
        }
        //going leftwards
        fd(j,y-1,0){
            if(grid[x][j] == -1)break;
            grid[x][j] = 1;
        }
        //going downwards
        f(j,x+1,h){
            if(grid[j][y] == -1)break;
            grid[j][y] = 1;
        }
        // going right
        f(j,y+1,w){
            if(grid[x][j] == -1)break;
            grid[x][j] = 1;
        }
    }
    int cnt = 0;
    f(i,0,h)
    {
        f(j,0,w)
        {
            // cout<<grid[i][j]<<" ";
            if(grid[i][j] == 1)cnt++;
        }
        // cout<<"\n";
    }
    cout<<cnt<<endl;
    return 0;
}   