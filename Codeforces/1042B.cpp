/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1042B. Vitamins
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
#define state [pos][bitset]

using namespace std;
using vi = vector<lli>;
using pii = pair<int, int>;
const lli INF  = 1e8 + 7;

const int N = 1e3 + 5;
vector<pair<lli, string>> elem;
lli dp[N][1 << 3], done[N][1 << 3], timer;

#define state [pos][(int)bitset]
lli f(int pos, char bitset){
  if (pos == sz(elem)){
    if (bitset == 0b111) return 0;
    return INF;
  }
  
  auto& ans = dp state;
  if (done state != timer){
    done state = timer;

    ans = INF;
    char nbs = bitset;
    for (char c : elem[pos].ss)
      nbs |= 1 << (c - 'A');

    ans = min(ans, f(pos+1, nbs) + elem[pos].ff);

    ans = min(ans, f(pos+1, bitset));
  }

  return ans;
}

void solve(){
  int n; cin >> n;
  elem.resize(n);
  fore(i,0,n)
    cin >> elem[i].ff >> elem[i].ss;

  timer++;
  lli ans = f(0, 0);
  cout << (ans == INF ? -1 : ans) << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
