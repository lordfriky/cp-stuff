/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: Permutations
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
    int n, i, fl, sl; cin >> n;

    if(n==1){
        cout << 1 << ENDL;
        return;
    } else if(n < 4){
        cout << "NO SOLUTION" << ENDL;
        return;
    } else if(n%2==0){
        fl = 1;
        sl = 0;
    } else {
        fl = 0;
        sl = 1;
    }

    if(n==4){
        cout << "2 4 1 3" << ENDL;
        return;
    }


    for(i = n; i>fl; i-=2){
        cout << i << " ";
    }

    for(i = n-1; i>sl; i-=2){
        cout << i;
        if(i!=sl+1){
            cout << " ";
        } else {
            cout << ENDL;
        }
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}