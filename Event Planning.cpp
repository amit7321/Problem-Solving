#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,h,w,minPrice,bed;

    while(cin>> n >> b >> h >> w){
            minPrice=b+1;
        while(h--){
            int p=0;
            cin>> p ;
            bool validBed=false;

            int a[w+1],x[w+1];
            for(int i=0;i<w;i++){
                cin>> bed ;
                if(n<=bed)
                  validBed=true;

            }

            if(validBed){
            for(int i=0;i<w;i++){
                    if(n*p<=minPrice)
                        minPrice=n*p;
               }
            }



        }
        if(minPrice==b+1)
            cout<< "stay home\n" ;
        else
            cout<< minPrice << "\n" ;

    }

    return 0;


}
