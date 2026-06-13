#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int bfs_componentes (vector<vi> &grafo, int n) {
       vector<bool> visitados;
       visitados.assign(n+1, false);
       queue<int> fila;
       int qntd_componentes = 0;

       for(int i=1 ; i<n+1 ; i++) {
              if(!visitados[i]) {
                     visitados[i] = true;
                     qntd_componentes++;
                     fila.push(i);
                     while(!fila.empty()) {
                            int atual = fila.front();
                            fila.pop();
                            for(int vizinho : grafo[atual]) {
                                   if(!visitados[vizinho]) {
                                          visitados[vizinho] = true;
                                          fila.push(vizinho);
                                   }
                            }
                     }
              }
       }
       return qntd_componentes;
}

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n, m, qntd_componentes;
       vector<vi> grafo;

       cin >> n >> m;
       grafo.resize(n+1);

       for(int i = 0 ; i < m ; i++) {
              int u, v;
              cin >> u >> v;

              grafo[u].push_back(v);
              grafo[v].push_back(u);
       }

       qntd_componentes = bfs_componentes(grafo, n);
       cout << qntd_componentes << "\n";
       return 0;
}

//Famílias de Troia
//https://judge.beecrowd.com/pt/problems/view/2440
