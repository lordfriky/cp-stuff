/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 1472B. Fair Division
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
  int n, aux, sum=0, n1=0, n2=0;
  cin >> n;
  fore(i,0,n){
    cin >> aux;
    if (aux == 2) n2++;
    else n1++;
  }

  if (sum%2!=0 || (sum/2!=0 && n1==0) || n==2)
    cout << "NO" << ENDL;
  else
    cout << "YES" << ENDL;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
