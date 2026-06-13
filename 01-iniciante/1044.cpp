#include <bits/stdc++.h>
using namespace std;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int a, b;
       cin >> a >> b;
       if(a > b) {
              if (a%b == 0) {
                     cout << "Sao Multiplos" << "\n";
              }
              else {
                     cout << "Nao sao Multiplos" << "\n";
              }
       }
       else {
             if (b%a == 0) {
                     cout << "Sao Multiplos" << "\n";
              }
              else {
                     cout << "Nao sao Multiplos" << "\n";
              } 
       }
       return 0;
}

//Múltiplos
//https://judge.beecrowd.com/pt/problems/view/1044
