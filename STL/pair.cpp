#include<bits/stdc++.h>
using namespace std;

int getDistance(const pair<int,int> & p1, const pair<int,int> & p2){
  auto [x1,y1] = p1;
  auto [x2,y2] = p2;
  return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

int main(){
  pair<string,int> student("sem", 21);
  student.first = "seyam";
  cout<<student.first<<" "<<student.second<<"\n";
  auto[name, age] = student;

  vector<pair<pair<int,int>,int>> nestedPair;
  nestedPair.push_back({{1,2},3});
}