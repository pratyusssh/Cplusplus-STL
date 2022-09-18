#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    map<int,string> m;
    unordered_map<int,string> m2;

    // m.insert( { 1,"y"} );
    // m.insert( { 2,"yo"});
    // m.insert( { 3,"yoy"});
    // m.insert( { 4,"yoyo"});
    // throwing error error: expected expression m.insert( { 1,"y"} );

    m[1] = "y";
    m[2] = "yo";
    m[3] = "yoy";
    m[4] = "yoyo";

    m2[1] = "y";
    m2[2] = "yo";
    m2[3] = "yoy";
    m2[4] = "yoyo";




    // m2.insert( {1,"y"});
    // m2.insert( {2,"yo"});
    // m2.insert( {3,"yoy"});
    // m2.insert( {4,"yoyo"});

    for(auto i : m ){
        cout<<i.first<<i.second<<endl;
    }

    cout<<endl;

     for(auto i : m2){
        cout<<i.first<<i.second<<endl;
    }

    m.count(1); //says if present or not

    auto it = m.find(2);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<(*i).second<<endl;
    }






}