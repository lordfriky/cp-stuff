/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: N Queens
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

int n, cont;
vi columnas, diag1, diag2;

void n_queens(int y){
	if(y == n){
		cont++;
		return;
	}
	fore(x,0,n){
		if(columnas[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
		columnas[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
		n_queens(y+1);
		columnas[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
	}
}

void solve(){
	cin >> n;
	columnas.resize(n, 0);
	diag1.resize(n*2, 0);
	diag2.resize(n*2, 0);
	n_queens(0);
	cout << cont << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
