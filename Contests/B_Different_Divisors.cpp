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
#define N 11003
using namespace std;

vi nums;

void solve()
{
    vector<bool>prime(N,true);
    f(i,2,N)
    {
        if(prime[i]){
            for(int j = i*i;j<N;j+=i)
            {
                prime[j] = false;
            }
        }
    }
    f(i,2,N){
        if(prime[i])nums.pb(i);
    }
    return ;
}

int main()
{
    int t;cin>>t;
    solve();
    while(t--)
    {
        int n;cin>>n;
        auto it = lower_bound(all(nums),n+1);
        auto it1 = it+1;
        cout<<((*it)*(*it1))<<endl;
    }
    return 0;
}   