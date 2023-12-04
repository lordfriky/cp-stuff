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

const int MOD = 1e9+7;
using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

void solve(){
  lli n, a, b;
  cin>>n>>a>>b;

  lli r= a + b + 1 ;
  n--;
  //cout<<r<<endl;
  while(n--)
  {
    r=(r*r)%MOD;
  }
  cout<<r<<endl;

}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
