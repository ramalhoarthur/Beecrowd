//Pares e Ímpares
//https://judge.beecrowd.com/pt/problems/view/1259

#include <bits/stdc++.h>
using namespace std;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n; cin >> n;
       
       vector<int> even;
       vector<int> odd;

       for(int i = 0; i < n; i++) {

              int num;
              cin >> num;

              if(num % 2 == 0)     even.push_back(num);
              else   odd.push_back(num);

       }

       sort(even.begin(), even.end());
       sort(odd.begin(), odd.end());
       reverse(odd.begin(), odd.end());

       even.insert(even.end(), odd.begin(), odd.end());
       
       for (int i = 0; i < even.size(); i++) {
              cout << even[i] << "\n";
       }
}