/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: CLFLARR. COLORFUL ARRAY
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

#define lsb(x) (x & -x)

void update(vi& ft, int index, int delta){
  for (; index <= n; index += lsb(index))
    ft[index] += delta;
}

void query(const vi& ft, int index){
  int result = 0;
  for (; index <= n; index += lsb(index))
    result +=
}

void solve(){
  int n, q; cin >> n >> q;
  vi ft(n, 0);
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
