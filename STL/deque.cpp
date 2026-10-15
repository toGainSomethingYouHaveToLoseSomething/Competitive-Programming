#include<bits/stdc++.h>
using namespace std;

int main(){
  deque<int> dq;
  
  dq.push_back(5);
  dq.push_front(10);
  
  dq.front();
  dq.back();

  dq.pop_back();
  dq.pop_front();
  
  dq.size();
  dq.empty();
  
}