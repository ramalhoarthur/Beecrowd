//Linha na Matriz
//https://judge.beecrowd.com/pt/problems/view/1181

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       float matrix[12][12], sum=0;
       int l;
       char t;

       cin >> l;
       cin >> t;

       for(int i=0 ; i < 12 ; i++) {
              for(int j=0 ; j < 12 ; j++) {
                     cin >> matrix[i][j];
              }
       }

       for(int i=0 ; i < 12 ; i++) {
              sum += matrix[l][i];
       }

       if(t == 'S') {
              cout << fixed << setprecision(1) << sum << "\n";
       }
       else if(t == 'M') {
              cout << fixed << setprecision(1) << sum/12 << "\n";
       }

       return 0;
       
}