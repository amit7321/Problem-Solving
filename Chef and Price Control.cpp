#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,n,k,loss,price ;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> n >> k ;

        loss=0;

        for(int i=0;i<n;i++)
        {
            cin >> price ;

            if(price>k)
            {
                loss += price-k ;
            }
        }

        cout << loss << "\n" ;

    }

    return 0 ;
}
