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

double dp[301][301][301];
double helper(int one,int two,int three,int& n)
{
    if(one<0 || two<0 || three<0)return 0;
    if(one == 0 && two == 0 && three == 0)return 0;

    int rem = (one+two+three);
    double ans = n+(one*helper(one-1,two,three,n) + two*helper(one+1,two-1,three,n) + three*helper(one,two+1,three-1,n));
    return dp[one][two][three] = ans/rem;
    
}
 
int main()
{
    int n,m;cin>>n;
    vector<int>a(n);
    f(i,0,n)
    {
        cin>>a[i];
    }
    int one = 0,two = 0,three = 0;
    f(i,0,n){
        if(a[i]==1)one++;
        else if(a[i]==2)two++;
        else if(a[i]==3)three++;
    }
    cout<<fixed<<setprecision(9)<<helper(one,two,three,n)<<endl;
    return 0;
}