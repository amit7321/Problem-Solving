#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,number,x;
    int power ;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> number ;
        vector <int> output ;
        power=1 ;

        while(number>0)
        {
            if(number%10>0)
            {
                output.push_back((number%10)*power);
            }
            number /= 10 ;
            power *= 10 ;
        }

        x=output.size();
        cout << x << "\n" ;

        for(int i=0;i<x;i++)
            cout << output[i] << " " ;
        cout<< "\n" ;

    }

    return 0 ;
}
