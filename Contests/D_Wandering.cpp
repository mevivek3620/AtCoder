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
    int n;cin>>n;
    vi a(n);
    f(i,0,n)cin>>a[i];
    ll max_prefix_sum = -1e17,running_sum = 0,prefix_sum=0,ans = 0;
    f(i,0,n)
    {
        running_sum += a[i];

        max_prefix_sum = max(max_prefix_sum,running_sum);

        ans = max(ans,max_prefix_sum + prefix_sum);
        
        prefix_sum += running_sum;

    }
    cout<<ans<<endl;
    return 0;
}   