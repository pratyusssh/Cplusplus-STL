#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_front(1);
    l.push_back(2);

    // l.pop_back();

    for(int i:l){
        cout<<i<<endl;
    }

    l.erase(l.begin());
    for(int i:l){
        cout<<i<<endl;
    }

}