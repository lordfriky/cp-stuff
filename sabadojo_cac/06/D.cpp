/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: D. Dyson Box
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

const lli lim = 2e5 + 2;

int arrX[lim] = {0}, arrY[lim] = {0};
lli sumX = 0, sumY = 0;

void solve(){
	int n, x, y; cin >> n;

	fore(i,0,n){
		cin >> x >> y;
		arrX[x]++; arrY[y]++;
		
		// Procesamos X
		if(arrX[x] == 1) sumX += 2;
		sumX -= abs(arrX[x-1] - (arrX[x] - 1));
		sumX += abs(arrX[x-1] - arrX[x]);
		sumX -= abs(arrX[x+1] - (arrX[x] - 1));
		sumX += abs(arrX[x+1] - arrX[x]);

		// Procesamos Y
		if(arrY[y] == 1) sumY += 2;
		sumY -= abs(arrY[y-1] - (arrY[y] - 1));
		sumY += abs(arrY[y-1] - arrY[y]);
		sumY -= abs(arrY[y+1] - (arrY[y] - 1));
		sumY += abs(arrY[y+1] - arrY[y]);

		cout << sumX << " " << sumY << ENDL;
	}
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
