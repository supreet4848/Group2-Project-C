#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    char size,base,ch;
    char topings[25];
    char drink[25];
    int i,amount=0;
    
    START:
    cout<<"\n ***** Welcome to PIZZA Shopie ***** : "; /*Decide price list*/
    cout<<"\n -------- Price List --------- : ";
    cout<<"\n 1..... Small Pizza: $100 :";
    cout<<"\n 2..... Medium Pizza: $150 : ";
    cout<<"\n 3..... Large Pizza: $200 :";
    cout<<"\n 4..... Topings: $5 Each :";
    cout<<"\n 5..... Cold Drink: $5 Each :";
    cout<<"\n 6..... Dips: $10 :";