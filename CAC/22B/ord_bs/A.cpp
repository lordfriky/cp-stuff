/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: A. Twins
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
    int n; cin >> n;
    vi v(n);
    int sum = 0;
    fore(i,0,n){
        cin >> v[i];
        sum += v[i];
    }
    sort(all(v));

    int c=0, sc=0; 
    while(sc<=sum){
        sc += v[c];
        c++;
    }
    cout << sc << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}