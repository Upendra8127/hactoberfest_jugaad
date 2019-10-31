#include<bits/stdc++.h> 
#define int long long
using namespace std;
main()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >q;
    q.push({5,1});
    q.push({4,5});
    q.push({10,5});
    while(!q.empty()){
        cout<<q.top().first;
        q.pop();
    }
    //Bsic version of Min Heap in c++ STL
    priority_queue<int,vector<int>,greater<int>>q;
     q.push(3); //pusing the value into the priority queque;
     q.push(1);
     q.push(10);
      q.push(34);
    while(!q.empty()){
        cout<<q.top(); // max element ;
        q.pop();
        }

    }
