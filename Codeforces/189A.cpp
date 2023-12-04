/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 189A. Cut Ribbon
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

const int MAX = 4001;
vi dp(MAX, -1), len(3);

int maxRibbon(int n, int count = 0){
  if (dp[n] != -1) return dp[n];
  if (n == 0) return count;
  if (n < 0) return 0;

  for(auto x : len){
    if (x <= n){
      int temp = maxRibbon(n-x, count+1);
      dp[n] = max(dp[n], temp);
    }
  }

  return dp[n];
}

void solve(){
  int n;
  cin >> n >> len[0] >> len[1] >> len[2];

  cout << maxRibbon(n) << ENDL;
}     

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
