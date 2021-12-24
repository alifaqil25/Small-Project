#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void powerN(int x[],const int asize,int(*select)(int))
{

    for(int i=0;i<asize;i++)
    {

        cout<<"\t"<<select(x[i]);
    }

}
int square(int n)
{
    return n*n;
}
int cube(int n)
{
    return n*n*n;
}
int forth(int n)
{
    return n*n*n*n;
}

int main()
{
    int aSize=10;
    int oriNum[aSize],i;
   cout<<"The original array is : "<<endl;
   srand(time(0));


   for(i=0;i<aSize;i++)
   {
       oriNum[i]=(rand()%9);
       cout<<"\t"<<oriNum[i];
   }
cout<<"\nThe square of number is :"<<endl;
powerN(oriNum,aSize,square);
cout<<"\nThe cube of number is :"<<endl;
powerN(oriNum,aSize,cube);
cout<<"\nThe forth of number is :"<<endl;
powerN(oriNum,aSize,forth);




}
