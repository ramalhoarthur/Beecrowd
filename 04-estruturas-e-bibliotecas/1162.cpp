//Organizador de Vagões
//https://judge.beecrowd.com/pt/problems/view/1162

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int bubble_sort (vi vector) {

       bool inversion = true;
       int inversions=0;
       
       while(inversion) {

              inversion = false;
              for(int i = 0 ; i < vector.size()-1 ; i++) {
                     if(vector[i] > vector[i+1]) {
                            swap(vector[i], vector[i+1]);
                            inversion = true;
                            inversions++;
                     }
              }

       }

       return inversions;

}


int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int n; 
       cin >> n;

       while(n--) {
              
              int l;
              cin >> l;
              vi vagoes(l); 

              for(int i = 0 ; i < l ; i++) {
                     cin >> vagoes[i];
              }

              cout << "Optimal train swapping takes " << bubble_sort(vagoes) << " swaps.\n";
       }

       return 0;
       
}