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
    int n;cin>>n;
    vi a(n);
    f(i,0,n)cin>>a[i];
    int ans = 0,num=a[0];
    f(i,2,1001)
    {
        int temp = 0;
        f(j,0,n)
        {
            if((a[j]%i)==0)temp++;
        }
        if(temp>ans){
            num = i;
            ans = temp;
        }
    }
    cout<<num<<endl;
    return 0;
}   