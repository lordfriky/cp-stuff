/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: ABC285_A. Edge Checker 2
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

bool graph[15][15];

// No juzguen, soy huevón para hacer una DFS
void process(){
  memset(graph, false, sizeof(bool)*15*15);

  // 1
  graph[0][1] = true;
  graph[0][2] = true;

  // 2
  graph[1][3] = true;
  graph[1][4] = true;

  // 3
  graph[2][5] = true;
  graph[2][6] = true;

  // 4
  graph[3][7] = true;
  graph[3][8] = true;

  // 5
  graph[4][9] = true;
  graph[4][10] = true;

  // 6
  graph[5][11] = true;
  graph[5][12] = true;

  // 7
  graph[6][13] = true;
  graph[6][14] = true;
}

void solve(){
  int a, b; cin >> a >> b;
  if (graph[a-1][b-1]) cout << "Yes" << ENDL;
  else cout << "No" << ENDL;
}

int main(){
    IO;
    process();
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
