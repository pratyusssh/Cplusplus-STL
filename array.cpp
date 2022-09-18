#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a = {1,2,3,4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<a[i]<<endl;
    }

    cout<<a.at(2);  //returns value of int at index 2
    cout<<a.empty(); //returns boolean if true or false
    cout<<a.front(); //returns first element of array
    cout<<a.back();  //returns last element of array
    
}