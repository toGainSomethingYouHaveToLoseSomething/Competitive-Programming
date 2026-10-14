#include<bits/stdc++.h>
#include<tuple>
using namespace std;

int main(){
    //declaration and access;
    tuple <int,string,char> person(20,"lala",'a'); // can be added more
    cout<< get<0>(person) <<endl;
    cout<< get<2>(person) <<endl;
    get<1>(person) = "yoo";
    cout<< get<1>(person) <<endl;


    // initialize and swap;
    tuple<int,int,int> tpl,tpl2;
    tpl = make_tuple(2,3,4);
    tpl2 = make_tuple(7,8,9);
    tpl.swap(tpl2);

    // vector of tuple
    vector<tuple<int,char,float>> vec;
    //inputs:
    // 3 a 2.0
    // 4 b 3.3
    // 9 s 3.4
    for(int i=0;i<3;i++){
        int x;cin>>x;
        char ch;cin>>ch;
        float d ;cin>>d;
        vec.push_back({x,ch,d});
    }
    for(int i=0;i<3;i++){
        cout<< get<0>(vec[i]) <<" "<< get<1>(vec[i])<<""<< get<2>(vec[i])<<endl;
    }


    //decompositon;
    tuple<int,int,int> t(1,2,3);
    int x,y,z;
    tie(x,y,z)=t;
    cout<<x<<" "<<y<<" "<<z<<endl;

    //concatination;
    tuple<int,char> tCon(20,'t');
    tuple<char,string> tCon2('R',"hello");
    tuple<int,char,char,string> tCon3 = tuple_cat(tCon,tCon2);
    auto tCon4 = tuple_cat(tCon,tCon2);
}