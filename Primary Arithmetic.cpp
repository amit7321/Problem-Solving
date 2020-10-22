#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string input1,input2;
    int n1,n2,x,y,counts,carry;

    while(cin >> input1 >> input2)
    {
        if(input1[0]!='0' && input2[0]!='0')
        {
            n1=input1.size();
            n2=input2.size();
            counts=0,carry=0;

            while(n1!=0 && n2!=0)
            {
                if(n1!=0)
                {
                    n1--;
                    x=input1[n1]-'0';

                }

                if(n2!=0)
                {
                    n2--;
                    y=input2[n2]-'0';
                }



                if(x+y+carry>9)
                {
                    counts++ ;
                    carry=1;
                }
                else
                    carry=0;

                x=0;
                y=0;

            }



        if(counts==0)
            cout << "No carry operation.\n" ;
        else if(counts==1)
            cout << "1 carry operation.\n" ;
        else
            cout << counts << " carry operations.\n" ;
        }

        else
            break ;

    }


    return 0;
}
