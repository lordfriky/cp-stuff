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
#define fore(i,a,b) for(int i=a;i<b;i++)
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
using vi = vector<int>;

void solve(){
    int n, m;
    cin >> n >> m;
    int c, sum = 0, t = 0;
    vi v;
    fore(i,0,n){
        cin >> c;
        v.pb(c);
    }
    sort(v.begin(), v.end());
    fore(i,0,n){
        if(v[i] < 0 && t < m){
            sum += (-1 * v[i]);
            t++;
        }
    }

    cout << sum << ENDL;
}

int main(){
    IO;
    //int t; cin >> t;
    //while(t--){
        solve();
    //}
    return 0;
}