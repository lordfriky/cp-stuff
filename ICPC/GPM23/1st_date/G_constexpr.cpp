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
using vi = vector<int>;
using pii = pair<int, int>;

struct sol {
  bool s[5000] = {false};
  constexpr sol(){
    int pos = 1, num = 2, act = 0;
    while(pos < 5000){
      if(act < num){
        s[pos] = true;
        act++; pos++;
      } else {
        pos += num;
        act = 0;
        num++;
      }
    }
  }
};

constexpr sol s{};

void solve(){
  int n; cin >> n;
  cout << (s.s[n-1] ? "John" : "Jane") << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
