#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,spot,counts,j ;
    bool temp;

    cin >> tCase ;

    while(tCase--){
        cin >> spot ;

        int queues[spot];
        int arr[spot];
        j=0;

        for(int i=0;i<spot;i++)
            cin >> queues[i] ;

        for(int i=0;i<spot;i++){
            if(queues[i]==1){
                arr[j++]=i;

            }
        }


          temp=true;

          for(int i=1;i<j;i++){
             if((arr[i]-arr[i-1])<6){
                temp=false ;
                break ;
             }

        }

        if(temp==true)
            cout << "YES" << "\n" ;
        else
            cout << "NO" << "\n" ;
        }



    return 0 ;
}
