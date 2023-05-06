/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: OFMIDIA1A. La papa caliente
*/
#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
using vi = vector<int>;

void solve(){
    int m, l, r; cin >> m >> l >> r;
    int ans = 45 - (45/(m+l+r))*(m+l+r);
    if(ans <= m && ans != 0) cout << "Maeva" << ENDL;
    else if(ans <= m+l && ans != 0) cout << "Lorena" << ENDL;
    else cout << "Ramona" << ENDL;
    
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}