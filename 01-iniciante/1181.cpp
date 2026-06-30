#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       float matriz[12][12], soma=0;
       int l;
       char t;

       cin >> l;
       cin >> t;

       for(int i=0 ; i < 12 ; i++) {
              for(int j=0 ; j < 12 ; j++) {
                     cin >> matriz[i][j];
              }
       }

       for(int i=0 ; i < 12 ; i++) {
              soma += matriz[l][i];
       }

       if(t == 'S') {
              cout << fixed << setprecision(1) << soma << "\n";
       }
       else if(t == 'M') {
              cout << fixed << setprecision(1) << soma/12 << "\n";
       }

       return 0;
}

//Linha na Matriz
//https://judge.beecrowd.com/pt/problems/view/1181