#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll t,capacity,currentWeight,totalPrice,price,bags,weight,unitCost ;
    vector <pair <int,pair <int,int> > > v ;

    cin >> t ;

    tc(t)
    {
        cin >> capacity >> bags ;

        currentWeight = 0 ;
        totalPrice = 0 ;


        while(bags--)
        {
            cin >> weight >> price ;

            unitCost = price/weight ;

            v.push_back(make_pair(unitCost,make_pair(weight,price))) ;

        }

        for(int i=0;i<bags;i++)
        {
            cout << v[i].first << v[i].second.first << v[i].second.second  << " " ;
        }
        cout << endl ;

       /* sort(v.begin(),v.end()) ;

        for(int i=bags; i>0; i--)
        {
            if(currentWeight+v[i].second.first <= capacity)
            {
                totalPrice += v[i].second.second ;
                currentWeight += v[i].second.first ;
            }
        }

        cout << "Hey stupid robber, you can get " << totalPrice << endl ;

        */
    }

    return 0 ;
}
