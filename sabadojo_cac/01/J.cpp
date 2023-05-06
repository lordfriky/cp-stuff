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
    lli n, aux, arr[3] = {0}, col[3] = {0};
    cin >> n;
    fore(i,1,n+1){
        cin >> aux;
        arr[i%3] += aux;
    }
    fore(i,1,n+1){
        cin >> aux;
        if(i%3 == 0){
            col[0] += aux * arr[0];
            col[1] += aux * arr[1];
            col[2] += aux * arr[2];
        } else if(i%3 == 1){
            col[0] += aux * arr[2];
            col[1] += aux * arr[0];
            col[2] += aux * arr[1];
        } else {
            col[0] += aux * arr[1];
            col[1] += aux * arr[2];
            col[2] += aux * arr[0];
        }
    }
    cout << col[0] << " " << col[1] << " " << col[2] << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}