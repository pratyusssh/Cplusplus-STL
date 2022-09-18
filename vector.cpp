#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity"<<v.capacity()<<endl;
     cout<<"Size"<<v.size()<<endl;

     for(int i=0;i<4;i++){
        v.push_back(i);
     }

     cout<<"At index 2"<<v.at(2)<<endl;

     cout<<v.front(); //returns first element of dynamic array
    cout<<v.back();  //returns last element of dynamic array

    for(int i:v){
        cout<<v[i];
    }

    v.pop_back();

    for(int i:v){
        cout<<v[i];
    }

    v.clear();
    cout<<"Capacity"<<v.capacity()<<endl;
     cout<<"Size"<<v.size()<<endl;


    

    
     



}