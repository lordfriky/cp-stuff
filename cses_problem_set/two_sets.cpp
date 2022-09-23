/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: Two Sets
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
    lli n, g; cin >> n;
    g = (n*(n+1))/2;
    if(g%2==1){
        cout << "NO" << ENDL;
        return;
    }

    lli sum{0}, cant{0};
    vector<lli> first_pair(n);
    vector<lli> second_pair;

    fore(i,0,n) first_pair[i] = i+1;
    //iota(all(first_pair), 1);

    while(sum < g/2){
        if(first_pair[n-cant-1] <= (g/2)-sum){
            second_pair.pb(first_pair[n-cant-1]);
            sum += first_pair[n-cant-1];
            first_pair.pop_back();
            cant++;
        } else {
            second_pair.pb(first_pair[(g/2)-sum-1]);
            sum += first_pair[(g/2)-sum-1];
            first_pair.erase(first_pair.begin() + (g/2)-sum-1);
            cant++;
        }
    }

    cout << "YES" << ENDL << cant << ENDL;
    for(auto i : second_pair) cout << i << " ";
    cout << ENDL << n-cant << ENDL;
    for(auto i : first_pair) cout << i << " ";
    cout << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}