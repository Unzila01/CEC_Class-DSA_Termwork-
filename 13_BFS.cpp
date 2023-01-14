#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void BFS(int n, vector<int>adj[])
{
    vector<int> bfs;
    vector<int> vis(n+1, 0);

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it:adj[node])
                {
                    if(!vis[it])
                    {
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }
    
    cout<<"Breadth First Traversal: ";
    for( auto j:bfs)
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

    BFS(n, adj);

    return 0;
}

// Input:
// 7
// 6
// 1 2
// 2 3
// 2 7
// 3 5
// 7 5
// 4 6

// Output:
// 1 2 3 7 5 4 6