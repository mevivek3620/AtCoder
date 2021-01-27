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
#define pll pair< ll,ll >
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define vll vector<pll>
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
#define N 103
using namespace std;
int h,w;

bool cmp(pll a,pll b)
{
    // if(a.ff+a.ss == b.ff+b.ss)return a.ff>b.ff;
    return (2*a.ff+a.ss>2*b.ff+b.ss);
}

int main()
{
    int n;
    cin>>n;
    // map<string,int>mp;
    vll a;
    ll sum1 = 0,sum2= 0;
    f(i,0,n){
       ll x,y;cin>>x>>y;
       a.pb(make_pair(x,y));
    //    sum2 += (1LL*x);
        sum1 += (x);
    }
    sort(all(a),cmp);
    
    int i=0,cnt= 0;
    while(sum2<=sum1 && i<n)
    {
        sum1 -= a[i].ff;
        sum2 += a[i].ff ;
        sum2 += a[i].ss;
        i++;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}   