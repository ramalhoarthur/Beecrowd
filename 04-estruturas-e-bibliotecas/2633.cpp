#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int n;

       while(cin >> n) {

              vector<pair<int,string>> carnes;
              for(int i = 0 ; i < n ; i++) {
                     int di;
                     string nome_carne;
                     cin >> nome_carne >> di;
                     carnes.push_back({di, nome_carne});
              }
              sort(carnes.begin(), carnes.end());

              for(int i = 0 ; i < carnes.size() ; i++) {
                     if(i == carnes.size()-1) cout << carnes[i].second;
                     else cout << carnes[i].second << " ";
              }
              cout << "\n";
       }
       return 0;
}

//Churras no Yuri
//https://judge.beecrowd.com/pt/problems/view/2633