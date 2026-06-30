#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n, q, caso=1;

       while(cin >> n >> q)

       if(n == 0 && q == 0) break;

       else {
              vll marmores(n);
              vll procurados(q);
              vi posicoes_procurados(q, -1);
              ll temp, p = 0;

              for(int i = 0 ; i < n + q ; i++) {
                     
                     if(i < n) {
                            cin >> temp;
                            marmores[i] = temp;
                     }
                     else {
                            cin >> temp;
                            procurados[p] = temp;
                            p++;
                     }

              }

              sort(marmores.begin(), marmores.end());

              for(int i = 0 ; i < procurados.size() ; i++) {

                     ll procurado = procurados[i];
                     for(int j = 0 ; j < marmores.size() ; j++) {
                            
                            if(procurado == marmores[j]) {
                                   posicoes_procurados[i] = j;
                                   break;
                            }
                     }

              }

              cout << "CASE# " << caso << ":\n";
              caso++;

              for (int i = 0; i < posicoes_procurados.size(); i++) {
              
                     if(posicoes_procurados[i] == -1) cout << procurados[i] << " not found\n";
                     else cout << procurados[i] << " found at " << posicoes_procurados[i]+1 << "\n";

              }

       }

       return 0;
}

//Onde está o Mármore?
//https://judge.beecrowd.com/pt/problems/view/1025