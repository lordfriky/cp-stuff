/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 334A. Candy Bags
*/

#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define ff first
#define ss second
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

void solve(){
  int n; cin >> n;
  fore(i,0,n){
    for(int j = i*(n/2)+1; j <= (i+1)*(n/2); j++){
      cout << j << " ";
    }
    
    for(int j = pow(n,2) - i*(n/2); j > pow(n,2) - (i+1)*(n/2); j--){
      cout << j << " ";
    }

    cout << ENDL;
  }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
