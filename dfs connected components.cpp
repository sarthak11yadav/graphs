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
bool vis[200001];int n,m,dist[100001];vector<int>ar[200001];
void dfs(int node)
{
    
    vis[node]=true;
    
    for(auto x:ar[node])
    {
        if(vis[x]==false)
        vis[x]=true,dfs(x);
        
        
    }
}
int main()
{


int c,a,b;va ve;

cin>>n>>m;
fo(i,m,1)
cin>>a>>b,ar[a].pb(b),ar[b].pb(a);


fo(i,n,1)
if(vis[i]==false) dfs(i),ve.pb(i),c++;
c--;
cout<<c<<endl;

fo(i,c,1)
cout<<ve[i]<<" "<<ve[i-1]<<endl;

}
//from hash to cash//
//beleive//