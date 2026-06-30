//Famílias de Troia
//https://judge.beecrowd.com/pt/problems/view/2440

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int bfs_components (vector<vi> &graph, int n) {
       
       vector<bool> visited;
       visited.assign(n+1, false);
       queue<int> q;
       int components = 0;

       for(int i=1 ; i<n+1 ; i++) {

              if(!visited[i]) {
                     visited[i] = true;
                     components++;
                     q.push(i);
              
                     while(!q.empty()) {
                            int visiting = q.front();
                            q.pop();
              
                            for(int vertex : graph[visiting]) {
                                   
                                   if(!visited[vertex]) {
                                          visited[vertex] = true;
                                          q.push(vertex);
                                   }

                            }
                     }
              }

       }
       return components;
}


int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n, m, components;
       vector<vi> graph;

       cin >> n >> m;
       graph.resize(n+1);

       for(int i = 0 ; i < m ; i++) {
              int u, v;
              cin >> u >> v;

              graph[u].push_back(v);
              graph[v].push_back(u);
       }

       components = bfs_components(graph, n);
       cout << components << "\n";

       return 0;
}