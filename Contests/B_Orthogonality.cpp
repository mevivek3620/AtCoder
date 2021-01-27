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

int main()
{
    int n;cin>>n;
    vl a(n),b(n);
    ll ans = 0;
    f(i,0,n)
    {
        cin>>a[i];
    }
        f(i,0,n)
    {
        cin>>b[i];
        ans += (a[i]*b[i]);
    }
    if(ans == 0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}   