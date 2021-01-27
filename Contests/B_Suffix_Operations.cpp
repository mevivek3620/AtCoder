#include <bits/stdc++.h>
#define ll long long
#define MAXN 102
#define M 1000000007
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
#define N 2003
using namespace std;

int dp[N][N];
int x[N][N]; 
//this gives us the number of moves from i,j to h,w via horizontally dir
int y[N][N];
int z[N][N];

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vi a(n);
        f(i,0,n)cin>>a[i];
        //when we take the minimum
        int val = a[0];
        f(i,1,n)
        {
            if(a[i] != a[i-1]){
                if(a[i]<a[i-1])val= a[i];
                else val = a[i-1];
                a[i] = val;a[i-1] = val;
                break;
            }
        }
        int ans = 0,last=0;
        f(i,0,n){
            ans += (a[i]-last-val);
            last = a[i]-val;
        }
        


    }
    return 0;
}   