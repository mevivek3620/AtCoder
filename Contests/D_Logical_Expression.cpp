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
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
#define N 11003
using namespace std;

ll a[62];
void solve()
{
    a[1] = 1LL*2;
    // cout<<a[1]<<endl;
    f(i,2,61){
        
        a[i] = a[i-1]*2;
        // cout<<a[i]<<endl;
    }
    return ;
}

int main()
{
    int n,x;cin>>n;
    solve();
    vector<string>s(n+1);
    f(i,1,n+1){
        cin>>s[i];
    }
    
    // dp[i] = f(1...i) = answer for (s1,s2,...si)
    ll dp[n+1];
    if(s[1] == "AND" )dp[1] = 1;
    else dp[1] = 3;
    f(i,2,n+1){
        // cout<<a[i]<<endl;
        if(s[i] == "OR" )dp[i] = a[i] + dp[i-1];
        else dp[i] = dp[i-1];
    } 
    cout<<dp[n]<<endl;
    return 0;
}   