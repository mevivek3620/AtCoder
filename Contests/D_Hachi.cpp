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

vi nums;

void solve()
{
    int i = 112;
    while(i<1000)
    {
        nums.pb(i);
        i+=8;
    }
    return ;
}

int main()
{
    string s;
    cin>>s;
    solve();
    vi cnt(10,0);

    f(j,0,(int)s.size())
    {
        cnt[s[j]-'0']++;
    }

    int flag = 0;
    if(s=="8")flag = 1;
    else if(s.size() == 2){
        if(stoi(s)%8 == 0)flag = 1;
        swap(s[0],s[1]);
        if(stoi(s)%8 == 0)flag = 1;
    }
    else{
        for(auto x:nums)
        {
            auto c = cnt;
            while(x != 0){
                c[x%10]--;
                x = x/10;
            }
            int t = 0;
            for(auto y:c){
                if(y<0)t = 1;
            }
            if(t==0)flag = 1;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    // cout<<0<<endl;
    // if(a&1)cout<<"Black"<<endl;
    // else cout<<"White"<<endl;
    return 0;
}   