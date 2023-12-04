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

const int N = 1e2;
int n, m;

bool mapa[N][N];
lli memo[N][N];


lli dp(int x, int y){
  if (memo[x][y] != -1) return memo[x][y];
  if (x == n-1 && y == m-1) return 1;

  lli& ans = memo[x][y];
  ans = 0;
  if (x != n && !mapa[x+1][y])
    ans += dp(x+1, y);
  if(y != m && !mapa[x][y+1])
    ans += dp(x, y+1);

  return ans;
}

void solve(){

  fore(i,0,N)
    fore(j,0,N)
      memo[i][j] = -1;

  int k;
  cin >> n >> m >> k;

  fore(i,0,k){
    int x, y;
    cin >> x >> y;
    mapa[x - 1][y - 1] = true;
  }

  cout << dp(0, 0) << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
