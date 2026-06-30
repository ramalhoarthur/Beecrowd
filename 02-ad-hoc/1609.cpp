//Contando Carneirinhos
//https://judge.beecrowd.com/pt/problems/view/1609

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
              set<int> s;

              while(n--) {
                     int num;
                     cin >> num;
                     s.insert(num);
              }
              cout << s.size() << "\n";
       }

       return 0;
       
}