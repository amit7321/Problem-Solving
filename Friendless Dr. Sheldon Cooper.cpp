#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pairs;
vector <pairs> adjacencyLists[1000];
vector < pairs > previousDrivers;
priority_queue <pairs,vector<pairs>,greater<pairs> > q;
bool visitedPlace[1000];


int mstPrims(int places)
{
    int minimumDriver=0;

    q.push(make_pair(places,0));

    while(!q.empty()){
        pairs temp=q.top();
        q.pop();
        int places=temp.first;

        if(visitedPlace[places]==true)
            continue;

        minimumDriver += temp.second;
        visitedPlace[places]=true;
        previousDrivers.push_back(temp);

        for(int i=0;i<adjacencyLists[places].size();i++){

            int currentPlace=adjacencyLists[places][i].first;
            int currentNoDriver=adjacencyLists[places][i].second;

            if(visitedPlace[currentPlace]==false && currentNoDriver<=previousDrivers[i].second)
                     q.push(adjacencyLists[places][i]);

        }


    }

    return minimumDriver;

}

int main()
{
    int t;

    cin>> t;

    while(t--){

        int places,drivers;

        cin>> places >> drivers ;

        adjacencyLists[places].push_back(make_pair(places,drivers));

        int numberOfDrivers=mstPrims(1);

        cout<< numberOfDrivers ;

    }

    return 0;

}


