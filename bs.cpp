//SAARTHAK YADAV//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll te;cin>>te;while(te--)
#define fo(i,n,y) for(int i=y;i<=n;i++)
#define of(j,n,y) for(int j=n-1;j>=0;j--)
#define sa set<ll>
#define pa pair<ll,ll>
#define va vector<int>
#define pb push_back
#define in insert
#define big INT_MAX
#define dk(x) greater<x>()
#define geo map<ll,ll>
#define dbg(x) cerr<<#x<<" "<<x<<endl;
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
bool vis[200001];int n,m,dist[100001];vector<int>ar[200001];unordered_map<int,int>p;stack<int>st;
void bfs(int node)
{
    queue<int>q;
    dist[node]=1;
    vis[node]=true;
    q.push(node);
    
    while(!q.empty())
    {
        int u= q.front();
        q.pop();
        
        for(auto child:ar[u])
        {
            if(!vis[child])
            {
                dist[child]=dist[u]+1;
                p[child]=u;
                q.push(child);
                vis[child]=true;
            }
           
        }
        
    }

}
int main()
{
int k,a,b;

cin>>n>>m;
fo(i,m,1)
    cin>>a>>b,ar[a].pb(b),ar[b].pb(a);
    
bfs(1);

if(dist[n]) 
{
    cout<<dist[n]<<endl;
    k = n;
    st.push(n);

while(1)
{
    st.push(p[k]);

    k=p[k];

    if(k==1)
        break;
    
}

while(!st.empty())
    cout<<st.top()<<" ",st.pop();
}
else
    cout<<"IMPOSSIBLE";


}
//from hash to cash//
//beleive//