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
    int n;
    cin>>n;
    vii a;
    f(i,0,n){
        int x,y;cin>>x>>y;
        a.pb(make_pair(x,y));
    }
    int cnt = 0;
    f(i,0,n-1)
    {
        double x1 = a[i].ff,y1=a[i].ss;
        // cout<<x1<<" "<<y1<<endl;
        f(j,i+1,n)
        {
            double x2 = a[j].ff,y2 = a[j].ss;
            // cout<<x2<<" "<<y2<<endl;
            double m = double((y2-y1)/(1.0*(x2-x1)));
            // cout<<m<<endl;
            if(1>=m && m>=-1)cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}   