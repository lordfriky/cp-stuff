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

lli m = 1e9 + 7;

lli mod(lli x){
    return (lli)x - ((lli)x/(lli)m);
}

void solve(){
    int n, q;
    cin >> n >> q;
    int arr[q];

    lli sumq = 0;
    int l, r, sum;
    char ope;

    fore(i,0,q){
        cin >> ope;
        if(ope == 'u'){
            cin >> l >> r >> sum;
            for(int j = l-1; j < r; j++) arr[j] += sum;
        } else {
            cin >> l >> r;
            for(int j = l-1; j < r; j++) sumq += mod(mod(arr[j]) * mod(arr[j]));
            cout << sumq << ENDL;
            sumq = 0;
        }
    }
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}