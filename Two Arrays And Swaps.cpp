#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);

    int tCase,n,k,temp;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> n >> k ;

        int a[n],b[n] ;

        for(int i=0;i<n;i++)
        {
            cin >> a[i] ;
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i] ;
        }

        sort(a,a+n);
        sort(b,b+n,greater<int>());
        temp=0;

        if(k!=0)
        {
            for(int i=0;i<n;i++)
            {
                if((temp!=k) && (a[i]<b[i]))
                {
                    swap(a[i],b[i]);
                    temp++ ;
                }
                else if(temp==k)
                    break;

            }

        }

        cout << accumulate(a,a+n,0) << "\n" ;

    }

    return 0 ;
}
