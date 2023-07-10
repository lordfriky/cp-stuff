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
  int a, b, c; cin >> a >> b >> c;
  vi costs(26,0), last(26,-1);
  string order, s; cin >> order >> s;

  fore(i,0,sz(s)){
    costs[s[i] - 'a'] += b;

    if(last[s[i] - 'a'] != i-1 && last[s[i] - 'a'] != -1) costs[s[i] - 'a'] += min((i - last[s[i] - 'a'] - 1) * a, c*2);

    last[s[i] - 'a'] = i;
  }
  
  fore(i,0,26) if(costs[i] != 0) costs[i] += c*2;

  for(auto c : order) cout << costs[c - 'a'] << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
