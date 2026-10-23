#include<iostream>
#include<list>
#include <vector>
#include<queue>
using namespace std;
int main(){

   queue<string> q;
   q.push("Nauman");
   q.push("Awais");
   q.push("Talha");
   cout<<" serving : "<<q.front()<<endl;
   q.pop();
   cout<<" serving : "<<q.front();


};