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

lli g(lli x){
    return (x*(x+1))/2;
}

lli binary_lifting(lli c){
    lli pos(0), jmp;
    for(jmp = 1e10; jmp; jmp /= 2) while(jmp+pos < 1e10 and g(jmp+pos) <= c) pos += jmp;
    return pos;
}

void solve(){
    int x;
    cin >> x;
    cout << binary_lifting(x) << ENDL;
}

int main(){
    IO;
    int t; cin >> t; while(t--)
    solve();
    return 0;
}