#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,rows,cols,cells;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> rows >> cols ;
        cells=rows*cols;

        if(cells==1 || cells==2)
            cout << "1" << "\n" ;
        else if(cells==3)
            cout << "2" << "\n" ;
        else if((cells%2)==0)
            cout << cells/2 <<"\n" ;
        else if((cells%2)!=0)
        {
            int temp=cells/2;
            cout << temp+(cells-(temp*2)) <<"\n" ;
        }

    }

    return 0 ;
}
