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
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
using vi = vector<int>;

constexpr pair<array<int, 212>, int> cprimes(int n) {
		bool criba[212] = {};
		criba[0] = criba[1] = true;
		array<int, 212> primes {};
		for(int i = 2; i*i < 212; i++){
			if(criba[i]) continue;
			for(int j = i*i; j < 212; j += i)
				criba[j] = true;
		}
		int j = 0;
		for(int i = 2; i < n + 1; i++)
			if(!criba[i])
				primes[j++] = i;
		return {primes, j};
	}

struct sol {
	lli s[212] = {};
	constexpr sol() {
		fore(i, 2, 212) {
		auto r = cprimes(i);
		lli dp[r.second] = {};
		dp[0] = 1;

		fore(i,0,r.second)
			fore(j,i+1,r.second)
				if(r.first[j] - r.first[i] <= 14)
					dp[j] += dp[i];

		s[i] = dp[r.second-1];
		}
	}
};
constexpr sol s{};

void solve(){
	int n; cin >> n;
	cout << s.s[n] << ENDL;	
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
