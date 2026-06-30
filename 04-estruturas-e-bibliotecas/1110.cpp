//Jogando Cartas Fora
//https://judge.beecrowd.com/pt/problems/view/1110

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n;

       while(cin >> n && n != 0) {
              
              queue<int> cards;
              
              for(int i=1 ; i < n+1 ; i++) {
                     cards.push(i);
              }

              cout << "Discarded cards: ";
              while(cards.size() > 2) {
                     cout << cards.front() << ", ";
                     cards.pop();
                     cards.push(cards.front());
                     cards.pop();
              }
              
              cout << cards.front() << "\n";
              cards.pop();
              cards.push(cards.front());
              cards.pop();
              cout << "Remaining card: " << cards.front() << "\n";
       
       }

       return 0;
}