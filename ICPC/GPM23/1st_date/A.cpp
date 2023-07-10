/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: A. Aliases
*/
#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
using vi = vector<int>;

void solve(){
  int n; cin >> n;
  map<string, int> ola;

  fore(i,0,n){
    int c; cin >> c;
    string aux, id = "";
    fore(i,0,c){
      cin >> aux;
      id += aux[0];
    }

    ola[id]++;
  }

  int unicos = 0;

  for(auto x : ola)
    if(x.second == 1) unicos++;

  cout << unicos << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
