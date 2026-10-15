#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int> a, pair<int,int> b){
  // first ascending, second descending
  if(a.first != b.first) return a.first < b.first;
  else return a.second > b.second;
  //call
  // sort(vec.begin(),vec.end(),cmp);
}

int main(){
  priority_queue<int> max_heap;
  priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(&cmp)> pq(cmp);


  pq.push({4,5});
  pq.push({3,5});
  pq.push({5,4});
  pq.push({3,2});

  while(!pq.empty()){
    auto[a,b] = pq.top();
    pq.pop();
    cout<<a<<" "<<b<<endl;
  }

}