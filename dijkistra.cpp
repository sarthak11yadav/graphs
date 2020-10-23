//SAARTHAK YADAV//
// beleive //
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll te;cin>>te;while(te--)
#define fo(i,n,y) for(int i=y;i<n;i++)
#define of(j,n,y) for(int j=n-1;j>=0;j--)
#define sa set<ll>
#define pa pair<ll,ll>
#define va vector<int>
#define pb push_back
#define in insert
#define dk(x) greater<x>()
#define geo map<ll,ll>
#define dbg(x) cerr<<#x<<" "<<x<<endl;
#define big INT_MAX
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
vector<pa>adj[100001];
int main()
{
    ll n,m,a,b,w;
    
  
   
   cin>>n>>m;
   
   vector<ll>dist(n+1,1e17);
     
   fo(i,m,0)
   {
       cin>>a>>b>>w;
       
       adj[a].pb({b,w});
   }
   
   priority_queue<pa,vector<pa>,greater<pa>>q;
   
   q.push({0,1});
   
   dist[1]=0;
   while(!q.empty())
   {
       int cur=q.top().second;
       int cur_d=q.top().first;
       
       q.pop();
       for(auto edge:adj[cur])
       {
           
           
           
            if(cur_d+edge.second<dist[edge.first])
            {
                    dist[edge.first]=cur_d+edge.second;
                    q.push({dist[edge.first],edge.first});
            }
        
       }
       
     
   }
   
   
   
     
       for(int i=1;i<=n;i++)
       cout<<dist[i]<<" ";
   
}