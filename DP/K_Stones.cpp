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
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
#define N 100003
using namespace std;

// int dp[N][101][2];
bool is_computed[N][2];
bool stored[N][2];

bool can_win(vi &a,int k,int turn)
{
    if(k == 0)return false;

    if(is_computed[k][turn])return stored[k][turn];

    bool ans = false;
    if(turn == 0){
        f(i,0,a.size())
        {
            if(a[i]<=k and !can_win(a,k-a[i],1))ans = true;
        }
    }
    else{
        f(i,0,a.size())
        {
            if(a[i]<=k and !can_win(a,k-a[i],0))ans = true;
        }
    }
    is_computed[k][turn] = true;
    return stored[k][turn] = ans;
}

int main()
{
    int n,k;cin>>n>>k;
    vi a(n);
    // memset(dp,-1,sizeof(dp));
    f(i,0,n)
    {
        cin>>a[i];
    }
    bool ans = can_win(a,k,0);
    if(ans == true)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    // for(auto x:temp)cout<<x<<endl;
    // cout<<*max_element(all(temp))<<endl;
    return 0;
}