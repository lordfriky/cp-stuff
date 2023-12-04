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
  int n, m;
  cin>>n>>m;
  queue<int>cola, bags;
  for(int i=0; i<n; ++i)
  {
    int a;
    cin>>a;
    bags.push(a);
  }

  for(int i=0; i<m; ++i)
  {
    int a;
    cin>>a;
    cola.push(a);
  }

  int cont =0 ;
  
  while(!bags.empty())
  {
    
    int mochila = bags.front();
    
    bags.pop();

    if(mochila == 0)
    {
      continue;
    }

    vector<int>a;
    int lim = 0 ;
    while(!cola.empty())
    {
      int f=cola.front();
      cola.pop();
      lim+=f;
      a.push_back(f);
    }
    
    if( lim <=mochila )
    {
      cont+=a.size();
      break;
    }

    vector<bool>dp(lim+1);

    for(int i=0; i<=lim; ++i)
      dp[i]=false;

    dp[0]=true;

    vector< vector<int> >nums[lim+1];
    vector<int>p;
    p.push_back(0);
    nums[0].push_back(p);

    for(int i=0; i<a.size(); ++i)
    {

      for(int j=lim ; j>=0; --j)
      {
        if(dp[j] && j + a[i] <=lim)
        {
          dp[j + a[i]]=true;
          for(auto e : nums[j])
            {
              nums[j + a[i]].push_back(e);
              nums[j + a[i]][ nums[j + a[i]].size()-1 ].push_back(a[i]);
            }
        }
      }

    }

    if(dp[mochila])
   {
      int maximo = 0, iter, iterador = 0 ;
      for(auto e : nums[mochila])
      {
        if(maximo < e.size())
        {
          maximo = e.size();
          iter = iterador;
        }
        iterador++;
      }
      cont+=maximo-1;
      int ola[16];
      fore(i,0,16) ola[i] = 0;
      for(auto e : nums[mochila][iter])
      {
        ola[e]++;
      }
      
      for(int i=0; i<a.size(); ++i)
      {
        if(ola[a[i]] >=1)
        {
          ola[a[i]]--;
          a[i]=-1;

        }
      }

      for(int i=0; i<a.size(); ++i)
      {
        if(a[i]>=1)
        cola.push(a[i]);
      }

   } 
   else
   {
    bags.push(mochila-1);
   }

  }

  cout<<cont<<endl;

}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
