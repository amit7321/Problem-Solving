#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int c,s=0,n,m,k;


    while(scanf("%d %d",&n,&m)){

        if(n>m)
            swap(n,m);

        for(int i=n;i<=m;i++){
            k=i;
            c=0;

            while(k!=1){
                if(k%2==1){
                    k=(3*k)+1;
                    c++;
                }
                else{
                    k=k/2;
                    c++;
                }
            }
            s=c;

        }

        if(n>m)
            swap(n,m);

        cout<< n <<" "<< m <<" "<< s << endl ;


    }

    return 0;
}
