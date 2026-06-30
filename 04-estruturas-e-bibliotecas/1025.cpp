//Onde está o Mármore?
//https://judge.beecrowd.com/pt/problems/view/1025

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n, q, case_number = 1;

       while(cin >> n >> q) {

              if(n == 0 && q == 0) break;

              else {
                     vll marble(n);
                     vll searching(q);
                     vi positions_searching(q, -1);
                     ll temp, p = 0;

                     for(int i = 0 ; i < n + q ; i++) {
                            
                            if(i < n) {
                                   cin >> temp;
                                   marble[i] = temp;
                            }
                            else {
                                   cin >> temp;
                                   searching[p] = temp;
                                   p++;
                            }

                     }

                     sort(marble.begin(), marble.end());

                     for(int i = 0 ; i < searching.size() ; i++) {

                            ll procurado = searching[i];
                            for(int j = 0 ; j < marble.size() ; j++) {
                                   
                                   if(procurado == marble[j]) {
                                          positions_searching[i] = j;
                                          break;
                                   }
                            }

                     }

                     cout << "CASE# " << case_number << ":\n";
                     case_number++;

                     for (int i = 0; i < positions_searching.size(); i++) {
                     
                            if(positions_searching[i] == -1) cout << searching[i] << " not found\n";
                            else cout << searching[i] << " found at " << positions_searching[i]+1 << "\n";

                     }

              }
       }

       return 0;

}