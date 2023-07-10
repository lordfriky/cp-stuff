/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: D. Dynamic Collection
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
  int n, q; cin >> n >> q;
  vi arr(n);
  fore(i,0,n) cin >> arr[i];
  sort(all(arr));
  int a, b, c;
  fore(i,0,q){
    cin >> a;
    if(a == 1){
      cin >> b;
      if(*lower_bound(all(arr), b) == b) continue;
      else if(arr[sz(arr) - 1] < b) arr.pb(b);
      else *upper_bound(all(arr), b) = b;
    } else {
      cin >> b >> c;
      cout << upper_bound(all(arr), c) - lower_bound(all(arr), b) << ENDL;
    }
  }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
