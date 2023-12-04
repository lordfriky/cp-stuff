/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1546A. AquaMoon and Two Arrays
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
  int n, aux1, aux2, m=0, D=0; cin >> n;
  vi a(n); vector<pii> u, d;
  fore(i,0,n) cin >> a[i];

  fore(i,0,n){
    cin >> aux1;
    aux2 = a[i] - aux1;
    m += abs(aux2); D += aux2;

    if (aux2 > 0) u.pb({aux2, i});
    else if (aux2 < 0) d.pb({aux2, i});
  }

  if (D != 0){
    cout << -1 << ENDL;
    return;
  }

  cout << m/2 << ENDL;
  while (!u.empty()){
    auto& f = *(u.end()-1);
    auto& s = *(d.end()-1);

    cout << f.ss+1 << " " << s.ss+1 << ENDL;

    f.ff--; s.ff++;
    if (f.ff == 0) u.pop_back();
    if (s.ff == 0) d.pop_back();
  }
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
