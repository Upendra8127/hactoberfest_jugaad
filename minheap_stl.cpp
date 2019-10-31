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
}