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
using namespace std;
int dp[100003];

// ----->>>>  Recursion + Memoization
// int helper(vi &h,int i,int n)
// {
//     if(i == n)return 0;
//     if(dp[i] != -1)return dp[i];
//     int temp = INT_MAX;
//     if(i+1<=n)temp = abs(h[i]-h[i+1])+helper(h,i+1,n);
//     if(i+2<=n)temp = min(temp,abs(h[i]-h[i+2])+helper(h,i+2,n));
//     return dp[i] = temp;
// }


int main()
{
    int n,k;cin>>n>>k;
    vi h(n);
    f(i,0,n)cin>>h[i];
    // memset(dp,-1,sizeof(dp));
    // cout<<helper(h,1,n);
    f(i,0,n)dp[i] = INT_MAX;
    dp[0] = 0;

    // ----------->>>>Iterative Approach
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0)dp[i] = min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
            // if(i+2<=n)dp[i] = min(dp[i],dp[i+2]+abs(h[i]-h[i+2]));
        }
        // cout<<dp[i]<<endl;
    }
    cout<<dp[n-1]<<endl;
    return 0;
}