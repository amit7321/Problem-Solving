#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,x,p,k;
    int a[6];

    cin >> tCase ;

    while(tCase--)
    {
        for(int i=0;i<6;i++)
        {
            cin >> a[i] ;
        }
        /* for(int i=0;i<6;i++)
        {
            cout << a[i] ;
        }

        */
        for(int i=0;i<5;i++)
        {
            k=a[i]*a[5] ;
            a[i]=k ;
        }

        int sum=accumulate(a,a+5,0);

        if(sum<=120)
            cout << "No" <<"\n" ;
        else
            cout << "Yes" << "\n" ;

    }


    return 0;
}
