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
int dp[100003][3];

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
    int n;cin>>n;
    vi a(n+1);
    vi b(n+1);
    vi c(n+1);
    f(i,1,n+1){
        cin>>a[i]>>b[i]>>c[i];
    }
    // cout<<(13<<1)<<endl;
    dp[1][0] = a[1],dp[1][1] = b[1],dp[1][2] = c[1];
    f(i,2,n+1)
    {
        dp[i][0] = max(dp[i-1][1],dp[i-1][2]) + a[i];
        dp[i][1] = max(dp[i-1][2],dp[i-1][0]) + b[i];
        dp[i][2] = max(dp[i-1][1],dp[i-1][0]) + c[i];
    }
    cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<endl;
    return 0;
}