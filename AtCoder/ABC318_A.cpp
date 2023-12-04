/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: ABC318_A. Full Moon
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
  int n, m, p;
  cin >> n >> m >> p;

  if (n < m) cout << 0 << ENDL;
  else {
    n -= m;
    cout << 1 + (n/p) << ENDL;
  }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
