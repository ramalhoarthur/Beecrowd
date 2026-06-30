#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n;

       while(cin >> n && n != 0) {
              
              queue<int> cartas;
              
              for(int i=1 ; i < n+1 ; i++) {
                     cartas.push(i);
              }

              cout << "Discarded cards: ";
              while(cartas.size() > 2) {
                     cout << cartas.front() << ", ";
                     cartas.pop();
                     cartas.push(cartas.front());
                     cartas.pop();
              }
              cout << cartas.front() << "\n";
              cartas.pop();
              cartas.push(cartas.front());
              cartas.pop();
              cout << "Remaining card: " << cartas.front() << "\n";
       
       }

       return 0;
}

//Jogando Cartas Fora
//https://judge.beecrowd.com/pt/problems/view/1110