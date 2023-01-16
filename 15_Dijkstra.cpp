#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Dijkstra(int n, vector<vector<int> >adj[], int S)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    vector<int> dist(n);
    
    for(int i=0;i<n;i++) dist[i]=1e9;
    
    dist[S]=0;
    pq.push({0,S});

    while(!pq.empty())
    {
        int dis=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(auto it:adj[node])
        {
            int edgeWeight=it[1];
            int adjNode=it[0];

            if(dis+edgeWeight<dist[adjNode])
            {
                dist[adjNode]=dis+edgeWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    cout<<"Distance from Source Node to other Nodes in the Graph: ";
    for( auto j:dist)
    {
        cout<<j<<" ";
    }
}

int main()
{
    int n, m, S;                               // n->nodes, m->edges
    cout<<"Enter the number of Nodes: ";
    cin>>n;
    cout<<"Enter the number of Edges: ";
    cin>>m;

    vector<vector<int>> adj[n];
    cout<<"Enter the Edges with Weight: "<<endl;
    for(int i=0;i<m;i++)
    {
        int u, v, wt;
        cin>>u>>v>>wt;

        vector<int>t1;

        t1.push_back(v);
        t1.push_back(wt);

        // t2.push_back(v);
        // t2.push_back(wt);

        adj[u].push_back(t1);
        // adj[v].push_back(t2);    
    }

    cout<<"Enter the Source Node: ";
    cin>>S;

    Dijkstra(n, adj, S);

    return 0;
}

// Enter the number of Nodes: 6
// Enter the number of Edges: 8
// Enter the Edges with Weight: 
// 0 1 4
// 0 2 4
// 1 2 2
// 2 3 3
// 2 4 1
// 2 5 6
// 3 5 2
// 4 5 3
// Enter the Source Node: 0
// Distance from Source Node to other Nodes in the Graph: 0 4 4 7 5 8 