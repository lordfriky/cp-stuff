/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1791B. Following Directions
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
    string s; cin >> s;
    pair<int, int> cords;
    bool f = false;
    cords.first = 0;
    cords.second = 0;
    fore(i,0,n){
        switch(s[i]){
            case 'L':
                cords.first--;
                break;
            case 'R':
                cords.first++;
                break;
            case 'U':
                cords.second++;
                break;
            case 'D':
                cords.second--;
        }
        if(cords.first == 1 && cords.second == 1) f = true;
    }
 
    if(f) cout << "YES" << ENDL;
    else cout << "NO" << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}