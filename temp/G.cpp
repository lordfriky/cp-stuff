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
using vi = vector<lli>;
using pii = pair<int, int>;

void solve(){
  vi arr(100);
  fore(i,0,100) arr[i] = i*i;
  fore(i,1,100) cout << arr[i] - arr[i-1] << " "; 
  cout << ENDL;
  /*
  int n; cin >> n;
  vi pos;
  fore(i,1,n){
    long double tmp = sqrt(i*i+n);
    lli tm2 = tmp;
    if(tmp == tm2) pos.pb(tmp);
  }
  cout << sz(pos) << ENDL;
  fore(i,0,sz(pos)-1) cout << pos[i] << " ";
  if (sz(pos) != 0) cout << *(pos.end()-1) << ENDL;
  */
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
