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
    int n, x;
    cin >> n >> x;
    int fn[n];
    fore(i,0,n) cin >> fn[i];

    bool mul[x] = {0};
    int curr = 1, ola = 0;

    fore(i,0,n){
        while(fn[i] * curr <= x){
            if(not mul[fn[i] * curr -1]){
                mul[fn[i] * curr - 1] = 1;
                ola++;
            }
        }
        curr = 1;
    }

    cout << ola << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}