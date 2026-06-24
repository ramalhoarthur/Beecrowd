#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
typedef vector<int> vi;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);


       string expressao;
       while(cin >> expressao) {
              
              stack<char> pilha;
              bool correto = true;
              
              for(char i : expressao) {
                     if(i == '(') {
                            pilha.push(i);
                     }
                     else if(i == ')') {
                            if(!pilha.empty()) {
                                   pilha.pop();
                            }
                            else {
                                   correto = false;
                                   break;
                            }
                     }
              }
              if(correto && pilha.empty()) {
                     cout << "correct\n";
              }
              else cout << "incorrect\n";
       }
       
       return 0;
}

//Balanço de Parênteses I
//https://judge.beecrowd.com/pt/problems/view/1068