/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1760C. Advantage
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
    int arr[n], sorted[n];

    fore(i,0,n){
        cin >> arr[i];
        sorted[i] = arr[i];
    }

    sort(sorted, sorted+n);
    fore(i,0,n){
        if(arr[i] == sorted[n-1]) cout << arr[i] - sorted[n-2] << " ";
        else cout << arr[i] - sorted[n-1] << " ";
    }
    cout << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}