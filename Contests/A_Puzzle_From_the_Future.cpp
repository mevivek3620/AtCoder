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
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        string t;
        char last;
        if(s[0]=='0'){t += '1';last='1';}
        else {t+='1';last = '2';}
        
        f(i,1,n)
        {
            if(s[i] == '1'){
                if(last =='2'){t+='0';last = '1';}
                else {t += '1';last = '2';}
            }
            else{
                if(last == '1'){t += '0';last = '0';}
                else {t+='1';last = '1';}
            }
        }
        cout<<t<<endl;
    }
    return 0;
}   