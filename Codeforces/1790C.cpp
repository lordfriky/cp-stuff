/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1790C. Premutation
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
  int n, d; cin >> n;
  vector<vi> m(n);

  fore(i,0,n){
    m[i].resize(n-1);
    fore(j,0,n-1)
      cin >> m[i][j];
  }
  
  sort(all(m));

  d = m[0][0] == m[n/2][0] ? n-1 : 0;

  cout << m[n/2][0] << " ";
  fore(i,0,n-1)
    cout << m[d][i] << " ";
  cout << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
