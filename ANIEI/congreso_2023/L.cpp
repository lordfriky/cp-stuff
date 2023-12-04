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
  lli n;
  cin>>n;
  vector<int>v;
  lli res = 1e9+7;
  for(int i=1; i*i<=n; ++i)
  {
    if(n%i==0)
    {
      lli b = n/ i ;

      v.push_back(i);
      v.push_back(b);

    }
  }
  for(int i=0; i<v.size(); ++i)
  {

    double tmp = sqrt(v[i] * n );
    lli temp = tmp;
    if( temp - tmp == 0 )
    { 
      res=min(res, v[i] * n );
    } 
  }
  cout<<res<<endl;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
