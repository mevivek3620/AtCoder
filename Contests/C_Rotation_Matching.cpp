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
    // int t;cin>>t;
    // while(t--)
    // {
        int n;cin>>n;
        vi a(n),b(n);
        map<int,int>mp,mp2;
        f(i,0,n)cin>>a[i];
        f(i,0,n){
            cin>>b[i];
            mp[b[i]] = i;
        }
        int mx = -1;
        f(i,0,n){
            if(i-mp[a[i]]>=0)mp2[i-mp[a[i]]]++; 
            else mp2[n+i-mp[a[i]]]++;
        }
        for(auto x:mp2){
            mx = max(mx,x.ss);
        }
        cout<<mx<<endl;
    // }
    return 0;
}   