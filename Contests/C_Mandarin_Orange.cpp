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
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
#define N 11003
using namespace std;

int main()
{
    int n,x;cin>>n;
    vi heights(n),left(n+2),right(n+2);
    f(i,0,n)cin>>heights[i];
    stack<int>s;
        vector<int>l,r;
        for(int i=0;i<heights.size();i++)
        {
            while(!s.empty()&&heights[i]<=heights[s.top()])
                s.pop();
        
            if(s.empty())l.push_back(0);
            else l.push_back(s.top()+1);
            s.push(i);
        }
        while(!s.empty())
                s.pop();
         for(int i=heights.size()-1;i>=0;i--)
        {
            while(!s.empty()&&heights[i]<=heights[s.top()])
                s.pop();
        
            if(s.empty())r.push_back(heights.size()-1);
            else r.push_back(s.top()-1);
            s.push(i);
        }
        reverse(r.begin(),r.end());
        int ans=0;
        for(int i=0;i<heights.size();i++)
        {
            ans=max(ans,heights[i]*(r[i]-l[i]+1));
        }
        cout<<ans<<endl;
    // if(!f)cout<<-1<<endl;
    return 0;
}   