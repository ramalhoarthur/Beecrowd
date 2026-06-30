//Balanço de Parênteses I
//https://judge.beecrowd.com/pt/problems/view/1068

#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       string expression;
       while(cin >> expression) {
              
              stack<char> s;
              bool valid = true;
              
              for(char i : expression) {

                     if(i == '(') {
                            s.push(i);
                     }
                     else if(i == ')') {
                            if(!s.empty()) {
                                   s.pop();
                            }
                            else {
                                   valid = false;
                                   break;
                            }
                     }

              }

              if(valid && s.empty()) cout << "correct\n";
              else cout << "incorrect\n";
              
       }
       
       return 0;
}