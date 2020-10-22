#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,w,y1,y2;
    int arr[10000];
    bool grd=false;

    cin>> t ;

    while(t--){
        cin>> w ;

        m=1;


        for(int i=1;i<=w;i++){
            cin>> y1 >> y2 ;
            arr[i]=abs(y1-y2);

        }


        for(int j=1;j<=(w-1);j++){
            if(arr[j]==arr[j+1]){
               grd=true;

            }
            else{
                grd=false;
                break;
            }

        }
        if(grd==true)
            cout<<"yes\n" ;
        else
            cout<<"no\n" ;

       if(t)
        cout<< "\n" ;


    }

    return 0;
}
