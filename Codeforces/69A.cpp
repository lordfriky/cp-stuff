/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 69A. Young Physicist
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
  int n; cin >> n;
  int auxx, auxy, auxz, sumx=0, sumy=0, sumz=0;
  fore(i,0,n){
    cin >> auxx >> auxy >> auxz;
    sumx += auxx; sumy += auxy; sumz += auxz;
  }
  cout << (sumx == 0 && sumy == 0 && sumz == 0 ? "YES" : "NO") << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
