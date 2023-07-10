/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: I. Improving Chewing Candy
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
  vector<pair<char, int>> candy;

  int n, k; cin >> n >> k;
  string s; cin >> s;

  char prev = s[0]; int sum = 1;

  fore(i,1,n){
    if(s[i] != prev){
      candy.pb(make_pair(prev, sum));
      prev = s[i]; sum = 1;
    } else sum++;
  }

  if(sz(candy) > 0 && prev == candy[0].ff)
    candy[0].ss += sum;
  else candy.pb(make_pair(prev, sum));

  if(sz(candy) == 1){
    cout << -1 << ENDL;
    return;
  }

  pii cur = make_pair(0,0), maxr = make_pair(-1,-1);
  vi let(26, 0); int szs = 0, mxs = 0;
  
  fore(i,0,sz(candy)){
    let[candy[i].ff - 'a'] += candy[i].ss;
    szs += candy[i].ss;
    cur.ss++;
    int maxl = 0;
    fore(i,0,26) maxl = max(maxl, let[i]);
    if(maxl > k){
      let[candy[cur.ff].ff - 'a'] -= candy[cur.ff].ss;
      szs -= candy[cur.ff].ss;
      cur.ff++;
    } else if (szs > mxs){
      mxs = szs;
      maxr = cur;
    }
  }

  if(maxr.ff == -1) cout << -1 << ENDL;
  else{
    int count = 0; string f = "";

    fore(i,maxr.ff,maxr.ss)
      fore(j,0,candy[i].ss){
        f += candy[i].ff;
        count++;
      }
    
    cout << count << ENDL << f << ENDL;
  }

}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
