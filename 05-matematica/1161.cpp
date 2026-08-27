//Soma de Fatoriais
//https://judge.beecrowd.com/pt/problems/view/1161

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       ll a, b;

       while(cin >> a >> b) {
              ll fat1 = 1, fat2 = 1;
              for(int i = 2 ; i <= a ; i++ ) {
                     fat1 *= i;
              }              
              for(int i = 2 ; i <= b ; i++ ) {
                     fat2 *= i;
              }          
              cout << fat1+fat2 << "\n";    
       }
       
       return 0;
}