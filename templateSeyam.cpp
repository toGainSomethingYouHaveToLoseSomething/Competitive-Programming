
//@Mohammad Seyam
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl "\n"
const ll MOD = 1e9+9;

bool cmp(pair<int,int> a, pair<int,int> b){
  // first ascending, second descending
  if(a.first != b.first) return a.first < b.first;
  else return a.second > b.second;
  //call
  // sort(vec.begin(),vec.end(),cmp);
  //priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(&cmp)> pq(cmp); 
}




//------------------------------[ Starts Here ]---------------------------
void solve(){
    ll n,m;cin>>n>>m;
    cout<<n+m<<endl;
    cout<<"ok\n";
}
int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t;t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }

    return 0;
}
