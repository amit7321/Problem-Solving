#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll t,n,a,b,sumA,sumB,remainderA,quoA,remainderB,quoB,chef,morty,draw  ;

    cin >> t ;

    tc(t)
    {
        cin >> n ;

        chef=0 ;
        morty=0 ;
        draw=0 ;

        while(n--)
        {
             cin >> a >> b ;

             sumA=0 ;
             sumB=0 ;
             remainderA=0 ;
             quoA=a ;
             remainderB=0 ;
             quoB=b ;


             while(quoA>0)
             {
                 remainderA=quoA%10 ;
                 sumA += remainderA ;
                 quoA=quoA/10 ;
             }

             while(quoB>0)
             {
                 remainderB=quoB%10 ;
                 sumB += remainderB ;
                 quoB=quoB/10 ;
             }

             if(sumA>sumB)
                chef++ ;
             else if(sumA<sumB)
                morty++ ;
             else
             {
                 chef++ ;
                 morty++ ;
             }


        }

        if(chef>morty)
            cout << "0 " << chef << endl ;
        else if(chef<morty)
            cout << "1 " << morty << endl ;
        else
            cout << "2 " << chef << endl ;

    }


    return 0 ;
}
