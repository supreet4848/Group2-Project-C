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
    cout<<"\n -------------------------------- ";
    cout<<"\n Enter Pizza Size : "; /*select pizza size*/
    cout<<"\n -------------------------------- ";
    cout<<"\n S ...... Small :";
    cout<<"\n M ...... Medium :";
    cout<<"\n L .....  Large :";
    cout<<"\n Choose Size : ";
    cin>>size; 
    if(size=='s' || size=='S')
    {
        amount=amount+100;
        cout<<"\n -------------------------------- ";
        cout<<"\n V ..... Veg : "; /*select base*/
        cout<<"\n N ..... Non - Veg :";
        cout<<"\n Choose Base : ";
        cin>>base;
        cout<<"\n Do you Like to Add Dips ";/*enter yes and no to add dips*/
        cout<<"\n Enter Y/N ";
        cin>>ch;
        if(ch=='y' || ch=='Y')
        {
            amount=amount+10;
        }
        cout<<"\n -------------------------------- ";
        cout<<"\n Add 3 Topings of your choice :"; /*you have to select any three topings*/
        for(i=1;i<=3;i++)
        {
            cout<<"\n Add "<<i<<" Topings : ";
            cin >>topings;
        }
        amount=amount+15;
        cout<<"\n Add 3 Drinks of your choice :";/*you have to select any three drinks*/
        cout<<"\n -------------------------------- ";
        i=1;
        while(i<=3)
        {
            cout<<"\n Add "<<i<<" Drink : ";
           cin >>topings;
            i++;
        }
        amount=amount+15;
        cout<<"\n Please Pay = $"<<amount;
        cout<<"\n Thanks for your VISIT :) ";
    }   
    else if(size=='m' || size=='M')
    {
        amount=amount+150;
        cout<<"\n -------------------------------- "; 
        cout<<"\n V ..... Veg : ";
        cout<<"\n N ..... Non - Veg :";
        cout<<"\n Choose Base : ";
        cin>>base;
        cout<<"\n Do you Like to Add Dips ";
        cout<<"\n Enter Y/N ";
        cin>>ch;
            if(ch=='y' || ch=='Y')
            {
            amount=amount+10;
            }
        cout<<"\n -------------------------------- ";
        cout<<"\n Add 3 Topings of your choice :";
        for(i=1;i<=3;i++)
        {
        cout<<"\n Add "<<i<<" Toping : ";
        cin >>topings;
        }
        amount=amount+15;
        cout<<"\n -------------------------------- ";
        cout<<"\n Add 3 Drinks of your choice :";
            i=1;
            while(i<=3)
            {
            cout<<"\n Add "<<i<<" Drink : ";
            cin >>topings;
            i++;
            }
            /*loops and formulas for price*/
        amount=amount+15;
        cout<<"\n Please Pay = $"<<amount;
        cout<<"\n Thanks for your VISIT :) ";
        }
        else if(size=='l' || size=='L')
        {
        amount=amount+200;
        cout<<"\n -------------------------------- ";
        cout<<"\n V ..... Veg : ";
        cout<<"\n N ..... Non - Veg :";
        cout<<"\n Choose Base : ";
        cin>>base;
        cout<<"\n Do you Like to Add Dips ";
        cout<<"\n Enter Y/N ";
        cin>>ch;
            if(ch=='y' || ch=='Y')
            {
            amount=amount+10;
            }
        cout<<"\n -------------------------------- ";
        cout<<"\n Add 3 Topings of your choice :";
        for(i=1;i<=3;i++)
        {
        cout<<"\n Add "<<i<<" Toping : ";
        cin >>topings;
        }
        amount=amount+15;
        cout<<"\n -------------------------------- ";
        cout<<"\n Add 3 Drinks of your choice :";
            i=1;
            while(i<=3)
            {
            cout<<"\n Add "<<i<<" Drink : ";
            cin >>drink;
            i++;
            }
        amount=amount+15;
        cout<<"\n Please Pay = $"<<amount;
        cout<<"\n Thanks for your VISIT :) ";
        }

        else
        {
        cout<<"\n You Enter Wrong Choice, Please Try Again : ";
        goto START;
        /*will start from first step*/
    }

    return 0;
}