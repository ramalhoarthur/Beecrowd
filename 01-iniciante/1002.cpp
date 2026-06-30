//Área do Círculo
//https://judge.beecrowd.com/pt/problems/view/1002

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       double radius, area; 
       cin >> radius;

       area = 3.14159 * radius * radius;

       cout << fixed << setprecision(4);
       cout << "A=" << area << "\n";
       return 0;
       
}