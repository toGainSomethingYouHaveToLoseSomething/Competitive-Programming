#include<bits/stdc++.h>
using namespace std;

int main(){
  //tuple declaration and access;
  tuple <int,string,char> person(20,"lala",'a'); // can be added more
  cout<< get<0>(person) <<endl;
  get<1>(person) = "yoo";
  cout<< get<1>(person) <<endl;
  // vec.push_back({n,s,ch});


  // pair
  pair<string,int> student("sem", 21);
  student.first = "seyam";
  cout<<student.first<<" "<<student.second<<"\n";
  auto[name, age] = student;

  vector<pair<pair<int,int>,int>> nestedPair;
  nestedPair.push_back({{1,2},3});
}
