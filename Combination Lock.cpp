#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int employee,hours ;
    float perHourSalary;

    cin>> employee ;
    cin>> hours ;
    cin>> perHourSalary ;

    cout<< "NUMBER = " << employee << endl ;
    cout<< "SALARY = U$ " << fixed << setprecision(2) << hours*perHourSalary << endl ;
}
