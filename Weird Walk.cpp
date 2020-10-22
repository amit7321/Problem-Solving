#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,n,k;
    long long counts;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> n ;
        int a[n],b[n];
        int suma[n],sumb[n];
        counts=0,k=0 ;
        suma[0]=0,sumb[0]=0;


        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        }

        for(int i=1;i<=n;i++)
        {
            cin >> b[i];
        }

        for(int i=1;i<=n;i++)
        {
            suma[i]=suma[i-1]+a[i] ;
            sumb[i]=sumb[i-1]+b[i] ;
        }

       /* for(int i=1;i<n;i++)
        {
            cout << suma[i] << " " ;
            cout << sumb[i] << " " ;

        }

        cout << "\n" ;

        */

        for(int i=0;i<n-1;i++)
        {
            if(suma[i]==sumb[i] && suma[i+1]==sumb[i+1])
            {
                counts += abs(suma[i]-sumb[i+1]);
            }
        }

        cout << counts << "\n" ;

    }

    return 0 ;

}
