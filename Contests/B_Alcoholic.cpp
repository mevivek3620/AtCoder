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

int main()
{
    int n,x;cin>>n>>x;
    vector<int>v(n),p(n);
    f(i,0,n)
    {
        cin>>v[i]>>p[i];
    }
    // float ans = 0;
    int ans = 0;
    int f = 0;
    f(i,0,n)
    {
        ans += v[i]*p[i];
        // cout<<ans<<endl;
        if(ans>x*100){
            cout<<i+1<<endl;
            f = 1;break;
        }
    }
    if(!f)cout<<-1<<endl;
    return 0;
}   