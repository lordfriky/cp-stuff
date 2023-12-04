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

inline lli gauss(lli n){
  return (n * (n+1))/2;
}

lli bf(lli x){
  lli c=0;
  for(lli p=x; p; p /= 2)
    while(gauss(c+p) <= x)
      c+=p;
  return c;
}

void solve(){
  lli n; cin >> n;
  cout << (gauss(bf(n/2)) * 2 == n ? bf(n/2)*2 : (bf(n/2) * 2)+1) << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
