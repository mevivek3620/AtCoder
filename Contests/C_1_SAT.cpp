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
int h,w;

int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    f(i,0,n){
       string s;cin>>s;
        if(s[0]=='!' && (mp[(s.substr(1))]==0 || mp[(s.substr(1))]==3)){
            mp[s.substr(1)]++;
        }
        else if(mp[s]<=1)mp[s]+=3;
    }
    int f = 0;
    for(auto x:mp)
    {
        if(x.ss == 4){
            f=1;
            cout<<x.ff<<endl;
            break;
        }
    }
    if(f==0)cout<<"satisfiable"<<endl;
    return 0;
}   