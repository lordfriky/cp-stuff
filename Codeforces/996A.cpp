/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 996A. Hit the Lottery
*/

#include <bits/stdc++.h>
#define ENDL endl
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

const int coinArray[5] = {100, 20, 10, 5, 1};

void solve(){
  int n; cin >> n;

  vi dp(n+1, INT_MAX);
  dp[0] = 0;

  fore(i,1,n+1)
    for(auto x : coinArray)
      if (x <= i){
        lli pre = dp[i-x];
        if (pre != INT_MAX && pre+1 < dp[i])
          dp[i] = pre+1;
      }


  cout << dp[n] << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
