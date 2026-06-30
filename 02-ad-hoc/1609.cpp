#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int t; cin >> t;

       while(t--) {
              int n; cin >> n;
              set<int> conjunto;
              while(n--) {
                     int num;
                     cin >> num;
                     conjunto.insert(num);
              }
              cout << conjunto.size() << "\n";
       }

       return 0;
}

//Contando Carneirinhos
//https://judge.beecrowd.com/pt/problems/view/1609