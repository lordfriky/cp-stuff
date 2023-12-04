/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 754A. Lesha and array splitting
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
using vi = vector<lli>;
using pii = pair<lli, lli>;

void solve(){
  int n; cin >> n;
  vector<pii> ans;
  lli aux, prev = 1;
  fore(i,1,n+1){
    cin >> aux;
    if (aux != 0){
      ans.pb({prev, i});
      prev = i+1;
    }
  }

  if (prev != 1 && ans[sz(ans)-1].ss != n)
    ans[sz(ans)-1].ss = n;

  if (prev == 1) cout << "NO" << ENDL;
  else{
    cout << "YES" << ENDL << sz(ans) << ENDL;
    for(auto [A, B] : ans)
      cout << A << " " << B << ENDL;
  }

}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
