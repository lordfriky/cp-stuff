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
    int p[n];
    fore(i,0,n) cin >> p[i];
    int l, r, k, sk;
    lli sum = 0;
    vi temp;

    while(t--){
        cin >> l >> r >> k;
        for(int i = l-1; i < r; i++) temp.pb(p[i]);
        sort(all(temp));

        sk = temp[k-1];
        for(int i = k; i < sz(temp); i++) if(temp[i] > sk) sum += temp[i];

        cout << sk << " " << sum << ENDL;
        sum = 0;
        temp.clear();
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}