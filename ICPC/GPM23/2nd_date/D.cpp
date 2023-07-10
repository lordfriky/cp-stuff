/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: D. Draconis Subarrays
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

vi kmppre(string& t){
  vi r(sz(t)+1); r[0] = -1;
  lli j = -1;
  fore(i,0,sz(t)){
    while(j>=0 && t[i]!=t[j]) j = r[j];
    r[i+1] = ++j;
  }
  return r;
}

lli kmp(string& s, string& t){
  lli cont{0}, j{0};
  vi b = kmppre(t);
  fore(i,0,sz(s)){
    while(j>=0 && s[i]!=t[j]) j = b[j];
    if(++j==sz(t)){
      cont++;
      j = b[j];
    }
  }
  return cont;
}

void solve(){
  int m, n; cin >> m >> n;

  if(m == 1){
    cout << n << ENDL;
    return;
  }

  int prv, cur; string mpross, npross;

  cin >> prv;
  fore(i,0,m-1){
    cin >> cur;
    mpross += "(" + to_string(prv - cur) + ")";
    prv = cur;
  }

  cin >> prv;
  fore(i,0,n-1){
    cin >> cur;
    npross += "(" + to_string(prv - cur) + ")";
    prv = cur;
  }

  cout << kmp(npross, mpross) << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
