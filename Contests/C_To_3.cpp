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
    ll n;cin>>n;
    vi a(3,0);
    int sum = 0,cnt=0;
    while(n != 0)
    {
        sum += (n%10);
        a[(n%10)%3]++;
        n/=10;
        cnt++;
    }
    // cout<<sum<<endl;
    sum = sum%3;
    if(sum == 0)cout<<0<<endl;
    else if(sum == 1 && (a[1]>0 && a[1]!=cnt))cout<<1<<endl;
    else if(sum == 1 && (a[2]>1 && a[2]!=cnt))cout<<2<<endl;
    else if(sum == 2 && (a[2]>0 && a[2]!=cnt))cout<<1<<endl;
    else if(sum == 2 && (a[1]>1 && a[1]!=cnt))cout<<2<<endl;
    else cout<<-1<<endl;
    return 0;
}   