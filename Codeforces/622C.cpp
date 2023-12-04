/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: 622C. Not Equal on a Segment
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

template <class T, class F = function<T(const T&, const T&)>>
struct Sparse {
  vector<T> sp[21]; // n <= 2^21
  F f;
  int n;

  Sparse(T* begin, T* end, const F& f) : Sparse(vector<T>(begin, end), f) {}

  Sparse(const vector<T>& a, const F& f) : f(f), n(sz(a)) {
    sp[0] = a;
    for (int k = 1; (1 << k) <= n; k++) {
      sp[k].resize(n - (1 << k) + 1);
      fore (l, 0, sz(sp[k])) {
        int r = l + (1 << (k - 1));
        sp[k][l] = f(sp[k - 1][l], sp[k - 1][r]);
      }
    }
  }

  T query(int l, int r) {
#warning Can give TLE D:, change it to a log table
    int k = __lg(r - l + 1);
    return f(sp[k][l], sp[k][r - (1 << k) + 1]);
  }
};

void solve(){
  ;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
