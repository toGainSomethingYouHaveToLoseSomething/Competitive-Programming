#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
  // first ascending, second descending
  if(a.first != b.first) return a.first < b.first;
  else return a.second > b.second;
}

int main(){
  vector<pair<int,int>> vec = {{2,3},{2,4},{5,1},{4,2},{7,8}};
  
  sort(vec.begin(),vec.end(),cmp);
  for(auto it: vec) cout<<it.first<<" "<<it.second<<"\n";


}