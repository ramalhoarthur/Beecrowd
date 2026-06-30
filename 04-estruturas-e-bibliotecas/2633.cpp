//Churras no Yuri
//https://judge.beecrowd.com/pt/problems/view/2633

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       
       int n;

       while(cin >> n) {

              vector<pair<int,string>> m;

              for(int i = 0 ; i < n ; i++) {
              
                     int di;
                     string name;
                     cin >> name >> di;

                     m.push_back({di, name});

              }

              sort(m.begin(), m.end());

              for(int i = 0 ; i < m.size() ; i++) {
              
                     if(i == m.size()-1) cout << m[i].second;
                     else cout << m[i].second << " ";

              }

              cout << "\n";
       }

       return 0;
}