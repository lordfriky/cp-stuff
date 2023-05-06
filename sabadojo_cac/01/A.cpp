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
    lli entradas[n], salidas[m];
    fore(i,0,n) cin >> entradas[i];
    fore(i,0,m) cin >> salidas[i];
    multiset<lli> ts;

    fore(i,0,n)
        fore(j,0,m)
            if(salidas[j] >= entradas[i]) ts.insert(salidas[j] - entradas[i]);
    
    //lli maxrep = 0;
    lli maxts = 5;
    /*
    for(auto x : ts) if((lli)ts.count(x) > maxrep && x >= 0){
        maxrep = (lli)ts.count(x);
        maxts = x;
    }*/

    cout << maxts << ENDL;

    
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}