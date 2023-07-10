/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: J. Jumping Reaction
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

lli MOD = 1e9 + 7;

void solve(){
  int n, q;
  cin >> n >> q;

  vi arr(n);
  fore(i,0,n) cin >> arr[i];

  while(q--){
    int l, r;
    cin >> l >> r;

    lli sum = 0;
    fore(i,l-1,r){
      sum += arr[i];
      sum %= MOD;
    }

    sum *= sum;
    sum %= MOD;

    fore(i,l-1,r)
      sum -= ((lli)arr[i] * (lli)arr[i]) % MOD;

    cout << sum/2 << ENDL;
  }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
