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
bool vis[200001];int n,m,k=1,w,sv,ev,dist[100001];vector<int>ar[200001];unordered_map<int,int>par;va ans;
bool dfs(int node,int p)
{
    
    
    vis[node]=true;
    
    par[node]=p;
    
    for(auto child:ar[node])
    {
        if(child==p) 
            continue;
            
        if(vis[child])
        {       
                sv=child;ev=node;
                return true;
            
        }
        if(!vis[child])
            if(dfs(child,node)) 
                return true;
    }
    
    
    return false;

}
int main()
{
int a,b;

cin>>n>>m;

fo(i,m,1)
    cin>>a>>b,ar[a].pb(b),ar[b].pb(a);
    
fo(i,n,1)
    if(!vis[i])
           if(dfs(i,-1))
                {
                    w=ev;

                    while(1)
                    {
                        ans.pb(w);
                        
                        w=par[w];
                        
                        if(w==sv)
                            {ans.pb(sv);break;}
                        
                    }
                    k=0;
                    
                    ans.pb(ev);
                    
                    cout<<ans.size()<<endl;
                    
                    for(auto x:ans)
                        cout<<x<<" ";
                        
                    break;
                }
    
    if(k)
        cout<<"IMPOSSIBLE";
    

}
//from hash to cash//
//beleive//