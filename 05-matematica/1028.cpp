#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int euclids_algorithm(int a, int b) {
       if(b == 0) return a;
       else return euclids_algorithm(b, a % b);
}

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int n; cin >> n;
       while(n--) {
              int f1, f2, mdc;
              cin >> f1 >> f2;

              cout << euclids_algorithm(max(f1,f2), min(f1,f2)) << "\n";

       }
       return 0;
}

//Figurinhas
//https://judge.beecrowd.com/pt/problems/view/1028