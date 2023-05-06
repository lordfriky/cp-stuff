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
#define f first
#define s second
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
using pii = pair<int, int>;

void solve(){
    int n, k, d = 0; cin >> n;
    pii p(0,0);
    fore(i,0,n){
        cin >> k;
        if(k == 0){
            switch(d){
                case 0:
                    p.s++;
                    break;
                case 1:
                    p.f--;
                    break;
                case 2:
                    p.s--;
                    break;
                case 3:
                    p.f++;
            }
        } else {
            d++;
            if(d==4) d = 0;
        }
    }

    cout << p.f << " " << p.s << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}