#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);
    d.push_front(1);
    for(int i:d){
        cout<<i;
    }

    // d.pop_back();

    

    cout<<d.at(0);

    cout<<d.size();

    d.pop_front();
    for(int i:d){
        cout<<i;
    }
}