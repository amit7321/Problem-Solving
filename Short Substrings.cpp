#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string b ;
    char a[101] ;
    int tCase,j,n ;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> b ;

        n=b.size();
        j=0;

        a[j]=b[0];
        j=1;

        for(int i=1;i<n;i++)
        {

            if((i%2)==1)
            {
                a[j++]=b[i];
            }



        }

        for(int i=0;i<j;i++)
             cout << a[i] ;

        cout << "\n" ;
    }

    return 0 ;
}
