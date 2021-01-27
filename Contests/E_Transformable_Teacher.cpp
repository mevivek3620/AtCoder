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

struct digits{
    int f,s,t;
};

vector<digits>nums;

void solve()
{
    int i = 16;
    while(i<1000)
    {
        if(i<100){
            nums.pb({i%10,i/10,0});
        }
        else{
            nums.pb({i%10,(i/10)%10,i/100});
        }
        i+=8;
    }
    return ;
}

int main()
{
    int n,m;cin>>n>>m;
    vi a(n+1),w(m+1);
    vl pre1(n+2,0),pre2(n+2,0);
    //step 1
    sort(all(a));

    f(i,1,n+1){
        cin>>a[i];
    }
    f(i,1,m+1)cin>>w[i];

    //step 2
    f(i,){
        cin>>a[i];
        if(i+1<=n)pre1[i] += abs(a[i+1]-a[i]);
        if(i-1>=1)pre2[i] += abs(a[i]-a[i-1]);
    } 
    //step 2
    // cout<<0<<endl;
    // if(a&1)cout<<"Black"<<endl;
    // else cout<<"White"<<endl;
    return 0;
}   