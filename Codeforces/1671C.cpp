/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1671C. Dolce Vita
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
using pii = pair<int, int>;

lli bl(vi& arr, lli x, lli d){
  lli c = 0;
  for(int p = sz(arr); p; p /= 2)
    while(c+p < sz(arr) && arr[c+p] + d*(c+p+1) <= x)
      c += p;
  return (arr[c] + d*(c+1) <= x ? c+1 : 0);
}

void solve(){
  lli n, x, cont=0, c=-1, d=0;
  cin >> n >> x;

  vi arr(n);
  fore(i,0,n) cin >> arr[i];

  sort(all(arr));
  fore(i,1,n) arr[i] += arr[i-1];

  while(c != 0){
    c = bl(arr, x, d);
    cont+=c;
    d++;
    
  }
  cout << cont << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
