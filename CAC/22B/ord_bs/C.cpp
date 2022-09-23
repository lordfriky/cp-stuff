/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: C. Books
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
    int n, t;
    cin >> n >> t;
    int books[n];
    fore(i,0,n) cin >> books[i];

    int c=0, k=0, sum=0;
    fore(i,0,n){
        sum += books[i];
        if(sum <= t) c++;
        else{
            sum -= books[k];
            k++;
        }
    }

    cout << c << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}