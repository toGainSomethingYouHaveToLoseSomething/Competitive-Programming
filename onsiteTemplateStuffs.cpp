#include<bits/stdc++.h>
using namespace std;

int main(){
  //tuple declaration and access;
  tuple <int,string,char> person(20,"lala",'a'); // can be added more
  cout<< get<0>(person) <<endl;
  get<1>(person) = "yoo";
  cout<< get<1>(person) <<endl;
  // vec.push_back({n,s,ch});
}
