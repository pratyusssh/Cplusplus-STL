#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("1");
    q.push("2");
    q.push("3");

    cout<<q.front();

    q.pop();

    cout<<q.front();


}