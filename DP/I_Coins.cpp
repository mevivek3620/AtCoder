    #include <bits/stdc++.h>
#define ll long long
#define M 1000000007
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
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define N 200003
#define endc "\n"
using namespace std;

double helper(vector<double> &a,int i,int k,int curr)
{
    if(curr == k)return 1.0;
    if(curr > k)
    int n = a.size();
    return a[i]*helper(a,n-i,k,curr+1) + (1-a[i])*(helper(a,n-i,k,curr));
}


int main()
{
    int n,m;cin>>n;
    vector<double>a(n+1);
    f(i,1,n+1)
    {
        cin>>a[i];
    }
    cout<<helper(a,n,n,0)<<endl;
    return 0;
}