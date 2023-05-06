/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: OFMIDIA1B. Chemsificación
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

inline bool iv(char c){
    return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}

void solve(){
    int n, cs; cin >> n;
    vector<string> p(n);
    fore(i,0,n) cin >> p[i];
    fore(i,0,n){
        cs = (sz(p[i]) > 3) ? 3 : sz(p[i]);
        fore(j,0,sz(p[i])){
            cout << p[i][j];
            if(cs == 1){
                if((sz(p[i])-((sz(p[i])/3)*3)) == 1 && iv(p[i][j])) cout << 'm';
                else if(iv(p[i][j]) && !(iv(p[i][j-1]))) cout << 'm';
            }
            cs--;
            if(cs==0) cs = (sz(p[i])-(j+1) > 3) ? 3 : sz(p[i])-(j+1);
        }
        cout << " ";
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}