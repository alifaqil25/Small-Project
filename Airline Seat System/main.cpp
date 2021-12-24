#include <iostream>

using namespace std;


string SeatFClass(bool seat[5][4])
{
    int i,j;
    cout<<"Your seat is : ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            if(seat[i][j]==0)
            {
                seat[i][j]=true;
                cout<<i+1;
                switch(j)
                {
                   case 0 :return "A - First Class\n\n";
                    case 1 :return "B - First Class\n\n";
                    case 2 :return "C - First Class\n\n";
                    case 3 :return "D - First Class\n\n";
                }
            }
        }
    }
}
string SeatEclass(bool seat[5][4])
{
    int i,j;
    cout<<"Your seat is : ";
    for(i=2;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(seat[i][j]==0)
            {
                seat[i][j]=true;
                cout<<i+1;
                switch(j)
                {
                   case 0 :return "A - Economy Class\n\n";
                    case 1 :return "B - Economy Class\n\n";
                    case 2 :return "C - Economy Class\n\n";
                    case 3 :return "D - Economy Class\n\n";
                }
            }
        }
    }
}



int main()
{
    bool seat[5][4] ={ {0,0,0,0} ,
                        {0,0,0,0} ,
                        {0,0,0,0} ,
                        {0,0,0,0} ,
                        {0,0,0,0} };

     bool Available;
    int type;
    int eAvailable=12,fcAvailable=8;

    do
    {
        if(eAvailable==0&&fcAvailable==0)
        {
            cout<<  "Seat full! Please wait for next flight.\n";
            break;
        }


    do
    {

        cout<<" Please type 1 for First Class and type 2 for Economy : ";
        cin>>type;

        Available=0;

        if(type==1 && fcAvailable>0)
        {
            cout<< SeatFClass(seat);
            fcAvailable--;
            Available=1;
        }
        else if(type==1 && fcAvailable==0)
        {
            char ans;
            cout<<"Seat for First Class is full.Do you want to take a seat at Economy Seat? (Y/N) : "<<endl;
            cin>>ans;

            if(ans=='Y' || ans=='y')
            {
               cout<< SeatEclass(seat);
                eAvailable--;
                Available=1;
            }
            else
            {
                cout<<"Next flight leaves in 3 hours\n\n";
                    Available=1;
            }
        }
        else if(type==2 && eAvailable>0)
        {
           cout<< SeatEclass(seat);
            eAvailable--;
            Available=1;
        }
        else if(type==2 && eAvailable==0)
        {
            char ans2;
            cout<<"Seat for Economy Class is full.Do you want to take a seat at First Class Seat? (Y/N) : "<<endl;
            cin>>ans2;

            if(ans2=='y'|| ans2=='Y')
            {
                cout<< SeatFClass(seat);
                fcAvailable--;
                Available=1;
            }
            else
            {
                cout<<"Next flight leaves in 3 hours\n\n";
                    Available=1;
            }
        }
        else if (type!=1 || type!=2)
        {
            cout<<"Error! Invalid Input! Please try again and Make sure you key in the right button"<<endl;
        }

    }while(Available=0);

    }while(1);


}
