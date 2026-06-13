#include <bits/stdc++.h>
using namespace std;
int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int n;
       cin >> n;
       vector<int> pares;
       vector<int> impares;
       for(int i = 0; i < n; i++) {
              int num;
              cin >> num;
              if(num % 2 == 0) {
                     pares.push_back(num);
              }
              else {
                     impares.push_back(num);
              }
       }
       sort(pares.begin(), pares.end());
       sort(impares.begin(), impares.end());
       reverse(impares.begin(), impares.end());
       pares.insert(pares.end(), impares.begin(), impares.end());
       for (int i = 0; i < pares.size(); i++) {
              cout << pares[i] << "\n";
       }
}

//Pares e Ímpares
//https://judge.beecrowd.com/pt/problems/view/1259
