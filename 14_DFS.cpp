#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfsGraph(int node, vector<int> &vis, vector<int> adj[], vector<int> &dfs)
{
    dfs.push_back(node);
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it]){
            dfsGraph(it, vis, adj, dfs);
        }
    }
}

void DFS(int n, vector<int>adj[])
{
    vector<int> dfs;
    vector<int> vis(n+1, 0);

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfsGraph(i, vis, adj, dfs);
        }
    }
    
    cout<<"Depth First Traversal: ";
    for( auto j:dfs)
    {
        cout<<j<<" ";
    }
}

int main()
{
    int n, m;                               // n->nodes, m->edges
    cout<<"Enter the number of Nodes: ";
    cin>>n;
    cout<<"Enter the number of Edges: ";
    cin>>m;

    vector<int> adj[n+1];
    cout<<"Enter the Edges: "<<endl;
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);    
    }

    DFS(n, adj);

    return 0;
}

// Input:
// Enter the number of Nodes: 7
// Enter the number of Edges: 6
// Enter the Edges: 
// 1 2
// 2 4
// 2 7
// 4 6
// 7 6
// 3 5

// Output:
// Depth First Traversal: 1 2 4 6 7 3 5 