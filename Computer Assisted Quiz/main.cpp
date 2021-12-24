#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char retry;
    int tResult=0,fResult=0,question=0;
    double percentage;
    cout<<"***Welcome to Computer-assisted Quiz***"<<endl;

    do
    {
        int choice,cAns,sAns;

        cout<<"\n1. Addition\n2. Subtraction\n3. Multiplication\nPlease select the type of arithmetic operation: ";
        cin>>choice;

           int num1,num2;
            srand(time(0));
            num1=1+rand()%100;
            num2=1+rand()%100;

            question++;

      switch (choice)
      {
          case 1 :cout<<"How much is "<<num1<<" plus "<<num2<<" : ";
                  cin>>sAns;
                  cAns=num1 + num2;

                  if(sAns==cAns)
                  {
                      cout<<"Congratulations!! Your answer is true. ";
                      tResult++;
                  }
                  else
                  {
                      cout<<"Wrong Answer!!";
                      fResult++;
                  }
                  break;

           case 2 : cout<<"How much is "<<num1<<" minus "<<num2<<" : ";
                  cin>>sAns;
                  cAns=num1 - num2;

                  if(sAns==cAns)
                  {
                      cout<<"Congratulations!! Your answer is true. ";
                      tResult++;
                  }
                  else
                  {
                      cout<<"Wrong Answer!!";
                      fResult++;
                  }
                  break;

           case 3 : cout<<"How much is "<<num1<<" multiply by "<<num2<<" : ";
                  cin>>sAns;
                  cAns=num1 * num2;

                  if(sAns==cAns)
                  {
                      cout<<"Congratulations!! Your answer is true. ";
                      tResult++;
                  }
                  else
                  {
                      cout<<"Wrong Answer!!";
                      fResult++;
                  }
                  break;

           default : cout<<"Wrong input!! Please choose number 1,2 or 3 ONLY! ";
                    break;



      }

      cout<<"Do you want to try again? (Y/N) "<<endl;
      cin>>retry;


    }while(retry!='N' && retry!='n');

    percentage=((float)tResult/question)*100;


    cout<<"\nThank you for using Computer-assisted Quiz.Here is your result\nTrue Answer:"<<tResult<<" \nWrong Answer: "<<fResult;

cout<<"\nYour percentage is :"<<percentage<<"%";



}
