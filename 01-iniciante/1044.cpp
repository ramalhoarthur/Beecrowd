//Múltiplos
//https://judge.beecrowd.com/pt/problems/view/1044

#include <bits/stdc++.h>
using namespace std;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int a, b;
       cin >> a >> b;

       if( max(a,b) % min(a,b) == 0 ) cout << "Sao Multiplos" << "\n";
       else cout << "Nao sao Multiplos" << "\n";

       return 0;
}