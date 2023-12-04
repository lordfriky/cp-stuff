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
  int k, m;
  cin >> k >> m;

  vi mochilas(k);
  fore(i,0,k)
    cin >> mochilas[i];

  vi objetos(m);
  fore(i,0,m)
    cin >> objetos[i];

  sort(mochilas.rbegin(), mochilas.rend());
  sort(all(objetos));

  int ans = 0, i = 0;
  for(; ans < m; ans++){
    while(i < k){
      if(mochilas[i] >= objetos[ans]){
        mochilas[i] -= objetos[ans];
        break;
      }
      i++;
    }
    if (i == k) break;
  }
  
  cout << ans << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
