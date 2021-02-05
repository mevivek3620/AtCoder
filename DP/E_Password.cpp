// https://codeforces.com/gym/102942/problem/E
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
#define N 100003
#define endc "\n"
using namespace std;

ll dp[N][10];

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        // dp[i][j] = number of non decreasing sequences ending at i and s[i] = j

        f(i,0,n+1){
            f(j,1,10)dp[i][j] = 0;
        }
        // f(i,1,10)
        dp[0][1] = 1;

        f(i,1,n+1){
            if(s[i-1] == '-'){
                f(digit,1,10){
                    f(k,1,digit+1)dp[i][digit] += dp[i-1][k];
                    dp[i][digit] %= M;
                }
            }
            else{
                int num = s[i-1]-'0';
                f(k,1,num+1)dp[i][num] += dp[i-1][k];
                dp[i][num] %= M;
            }
        }
        ll ans = 0;
        f(i,1,10)ans += dp[n][i];
        cout<<ans%M<<endl;
    }
    return 0;
}