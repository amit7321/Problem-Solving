#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,n,sum;

    cin>> tCase ;

    while(tCase--)
    {
        cin >> n ;
        sum=1 ;

        for(int i=2; ;i=i*2)
        {
            sum=sum+i;
            if(n%sum==0)
                break;
        }

        cout << n/sum <<"\n" ;

    }

    return 0 ;

}

