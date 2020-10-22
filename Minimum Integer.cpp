#include<bits/stdc++.h>
using namespace std;

/*bool inRange(int low,int high,int x)
{
    return ((x-low)<=(high-low));
}
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x,l,r,d,q,i=0;

    cin>> q ;

    while(q--){
        cin>> l >> r >> d ;
        if(d==1){
            cout<< "1" <<"\n" ;
        }
        bool match=false;
        if(d>1){
            for(i=0;i<=10^9;i++){
            //cout<<"aaaaaaaaaaaaaa"<<"\n";
            if(i%d==0){
                    //cout<<"cccccccccc"<<"\n";
                    if((i>l) && (i<r)){
                       continue;
                    }
                    else{
                        cout<< i ;
                        match=true;

                    }

                }
                if(match==true)
                    break;


               }


            }
        }


    return 0;

}
