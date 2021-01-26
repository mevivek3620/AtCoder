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
#define endc "\n"
using namespace std;

map<pll,ll>dp;

string lcs(string s,string t,int n,int m)
{
    int lcs[n+1][m+1];
    string ans;
    f(i,0,n+1)
    {
        f(j,0,m+1)
        {
            if( i==0 || j==0)lcs[i][j] = 0;
            else if(s[i-1] == t[j-1]){
                lcs[i][j] = 1+lcs[i-1][j-1];
                // ans.pb(s[i]);
            }
            else lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    int  i =n,j = m;
    while(i>0 && j>0)
    {
        if(s[i-1]==t[j-1]){
            ans.pb(s[i-1]);
            i--;j--;
        }
        else if(lcs[i-1][j]>lcs[i][j-1]){
            i--;
        }
        else j--;
    }
    reverse(all(ans));
    return ans;
}

int main()
{
    string s,t;cin>>s>>t;
    cout<<lcs(s,t,s.size(),t.size())<<endl;
    return 0;
}