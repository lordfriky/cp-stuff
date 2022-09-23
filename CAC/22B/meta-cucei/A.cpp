/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: A. Finding Facebook
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

string facebook = "facebook";
int ind = 0;
bool flags[8] = {0};
bool flag = 1;
int case_count = 1;

void solve(){
    string input;
    cin >> input;
    fore(i,0,int(input.length())){
        if(input[i] = facebook[ind]){
            flags[ind] = 1;
            ind++;
            if(ind==8) break;
        }
    }

    fore(i,0,8){
        if(!flags[i]){
            flag = 0;
            break;
        }
    }

    cout << "Case #" << case_count << ": ";
    if(flag) cout << "YES" << ENDL;
    else cout << "NO" << ENDL;

    fore(i,0,8) flags[i] = 0;
    flag = 0;
    case_count++;
    ind = 0;
}

int main(){
    IO;
    int t; cin>>t; while(t--)
    solve();
    return 0;
}