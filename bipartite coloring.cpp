#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
 
int n, m;
vector<vector<int>> g;
vector<int> color;
vector<bool> vis;
 
bool dfs(int u, int c, int par)
{
	vis[u] = true;
	color[u] = c;
 
	for(auto v: g[u])
	{
		
		if(color[v] == 0)
			if(!dfs(v, (color[u]^3), u)) 
				return false;
		if(color[v] == color[u]) 
			return false;
	}
	return true;
}
 
bool color_all()
{
	for(int i = 1; i <= n; ++i)
	{
		if(!vis[i])
			if(!dfs(i,1,-1)) 
				return false;
	}
	return true;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	g.resize(n+1);
	color.resize(n+1);
	vis.resize(n+1);
 
	for(int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	bool ans = color_all();
	if(!ans)
	{
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}
	for(int i = 1; i <=n ; ++i)
	{
		cout << color[i] << " ";
	}
 
}