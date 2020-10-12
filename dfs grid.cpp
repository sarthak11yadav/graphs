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
char a[1001][1001];bool vis[1001][1001];int n,m,i,j;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool isvalid(int x,int y)
{
    if(x<1 or x>n or y<1 or y>m)
    return false;
    
    if(vis[x][y]==true or a[x][y]=='#')
    return false;
    else
    return 
    true;
    
    
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int k=0;k<4;k++)
    if(isvalid(x+dx[k],y+dy[k]))
    dfs(x+dx[k],y+dy[k]);
}
int main()
{
ll c=0;
cin>>n>>m;
fo(i,n,1)
    fo(j,m,1)
        cin>>a[i][j];
fo(i,n,1)
    fo(j,m,1)
        if(a[i][j]=='.' and vis[i][j]==false) dfs(i,j),c++;
        
        cout<<c;
}
//from hash to cash//
//beleive//