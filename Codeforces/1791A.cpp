/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1791A. Codeforces Checking
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
    char x; cin >> x;
    switch(x){
        case 'c':
            cout << "YES" << ENDL;
            break;
        case 'o':
            cout << "YES" << ENDL;
            break;
        case 'd':
            cout << "YES" << ENDL;
            break;
        case 'e':
            cout << "YES" << ENDL;
            break;
        case 'f':
            cout << "YES" << ENDL;
            break;
        case 'r':
            cout << "YES" << ENDL;
            break;
        case 's':
            cout << "YES" << ENDL;
            break;
        default:
            cout << "NO" << ENDL;
    }
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}