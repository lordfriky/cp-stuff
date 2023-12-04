/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 580D. Kefa and Dishes
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

struct rule{
  lli x, y = 0, c = 0;
  bool operator<(const rule& p){
    return x < p.x;
  }
};

vi d;
vector<rule> r;
int n, m, k;

lli dp[19][1 << 18];
lli done[19][1 << 18];
lli timer;

#define state [pos][bitset]
lli f(lli pos, lli prev, int bitset){
  if (pos == n){
    if (__builtin_popcount(bitset) == m) return 0;
    return LLONG_MIN;
  }

  auto& ans = dp state;
  if (done state != timer){
    done state = timer;
    
    ans = LLONG_MIN;

    int nbs = bitset | (1 << pos);

    lli special = 0;
    rule gb;
    gb.x = prev;
    auto gb2 = lower_bound(all(r), gb);
    if(gb2 != r.end() && (*gb2).x == prev && (*gb2).y == pos)
      special = (*gb2).c;
    ans = max(ans, f(pos+1, pos, nbs) + d[pos] + special);

    ans = max(ans, f(pos+1, prev, bitset));
  }

  return ans;
}


void solve(){
  cin >> n >> m >> k;

  d.resize(n);
  fore(i,0,n) cin >> d[i];
  
  r.resize(k);
  fore(i,0,k)
    cin >> r[i].x >> r[i].y >> r[i].c;

  sort(all(r));
  
  timer++;
  cout << f(0, LLONG_MAX, 0) << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
