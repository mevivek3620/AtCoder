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

double slope(pii x,pii y)
{
    if(x.ff==y.ff)return INT_MAX;
    return (y.ss-x.ss)/(1.0*(y.ff-x.ff));
}

int main()
{
    int n;
    cin>>n;
    vii a(n);
    f(i,0,n)
    {
        cin>>a[i].ff>>a[i].ss;
    }
    int f = 0;
    f(i,0,n)
    {
        f(j,i+1,n)
        {
            f(k,j+1,n)
            {
                pii x = a[i],y = a[j],z = a[k];
                
                double m1 = slope(x,y),m2 = slope(y,z),m3 = slope(x,z);
                if(m1 == m2 && m2 == m3){
                    // cout<<x.first
                    // print(x);print(y);print(z);
                    f =1;
                }
                
            }
            if(f)break;
        }
        if(f)break;
    }
    if(f)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    // if(a&1)cout<<"Black"<<endl;
    // else cout<<"White"<<endl;
    return 0;
}   