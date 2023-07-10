/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: X. Description...
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
  lli n; cin >> n;
  
  if(n == 2) cout << 2 << ENDL;

  lli j=3, cambio=2;
  bool flag = true;

  while(j <= (lli)(1e12) + 4){
    cout << j << " " << cambio << ENDL;
    if(flag) cambio++;

    if(n >= j and n <= j + cambio -1){
      cout << j << ENDL;
      return;
    }

    j += cambio;

    flag = !flag;
  }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
