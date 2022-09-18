#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
    set<int> s;
    unordered_set<int> s2;

    s.insert(5);
    s.insert(6);
    s.insert(0);
    s.insert(1);
    s.insert(7);
    s.insert(8);

    s2.insert(5);
    s2.insert(6);
    s2.insert(0);
    s2.insert(1);
    s2.insert(7);
    s2.insert(8);

    for(auto i:s){
        cout<<i<<endl;
    }
     cout<<endl;
    for(auto i:s2){
        cout<<i<<endl;
    }
     cout<<endl;
    s.erase(s.begin()); //will erase the first element

    set<int>::iterator it = s.begin();
    it++; //will erase the second element, here its 5

     for(auto i:s){
        cout<<i<<endl;
    }
      cout<<endl;

    set<int>::iterator itr = s.find(6);  //will print elements after 
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }


}
