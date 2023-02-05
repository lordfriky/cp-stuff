/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1760B. Atilla's Favorite Problem
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
    int n, ans = 0; cin >> n;
    string s; cin >> s;
    fore(i,0,n) if(((int)s[i] - 96) > ans) ans = (int)s[i] - 96;
    cout << ans << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}