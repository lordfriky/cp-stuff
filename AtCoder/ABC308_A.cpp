/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: ABC308_A. New Scheme
*/

#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define ff first
#define ss second
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

void solve(){
  int aux, prev=100; bool flag = true;

  fore(i,0,8){
    cin >> aux;
    if (aux < prev) flag = false;
    if (!(aux >= 100 && aux <= 675)) flag = false;
    if (aux%25!=0) flag = false;
    prev = aux;
  }

  if (flag) cout << "Yes" << ENDL;
  else cout << "No" << ENDL;

}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
