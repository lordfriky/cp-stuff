/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1770A. Koxia and Whiteboards
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
    int n, m; cin >> n >> m;
    vi a(n); vi b(m);
    lli sum = 0;
    fore(i,0,n){
        cin >> a[i];
        sum += a[i];
    }
    fore(i,0,m) cin >> b[i];
    sort(all(a));
    sort(b.rbegin(), b.rend());
    fore(i,0,m){
        sum -= a[i];
        sum += b[i];
        if(i+1==m) break;
    }
    cout << sum << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}