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

void solve(){
  int c0, c1, m0, m1, maxx = 0;
  cin >> c0 >> c1 >> m0 >> m1;
  
  if (m0 == 0 || c0 == 0)
    maxx = min(c1, m1);
  else if (m1 == 0 || c1 == 0)
    maxx = min(c0, m0);
  else{
    int mm, MM, dM, uM;
    if (c1 >= c0){
      uM = m1;
      MM = c1;
      mm = c0;
    } else {
      uM = m0;
      MM = c0;
      mm = c1;
    }

    dM = MM/(mm+1);
    
    if(dM < uM)
      maxx = mm + MM;
    else
      maxx = mm + (uM * (mm+1));
  }

  cout << (maxx != 0 ? maxx : -1) << ENDL;

}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
