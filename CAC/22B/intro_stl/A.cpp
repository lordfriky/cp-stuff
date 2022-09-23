/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: A. Watermelon
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
    int w; cin >> w;
    if(w%2 == 0 && w > 2){
        cout << "YES" << ENDL;
    }else{
        cout << "NO" << ENDL;
    }
}

int main(){
    IO;
    //int t; cin >> t;
    //while(t--){
        solve();
    //}
    return 0;
}