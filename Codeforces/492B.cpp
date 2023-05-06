/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 492B. Vanya and Lanterns
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
    int n, l; cin >> n >> l;
    int arr[n], dist[n-1];
    fore(i,0,n) cin >> arr[i];
    sort(arr, arr+n);
    fore(i,0,n-1) dist[i] = arr[i+1] - arr[i];
    double maxx = max((double)(*max_element(dist, dist+n-1))/2, (double)(max(arr[0], l-arr[n-1])));
    cout << maxx << ENDL;
    
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}