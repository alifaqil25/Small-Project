#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void FcnSelection(int a[],const int size,bool (*comparisonFcn)(int)(int))
{
    int bestIndex,currentIndex,startIndex;

    for(startIndex=0;startIndex<size;startIndex++)
    {
        bestIndex=startIndex;

        for(currentIndex=startIndex+1;currentIndex<size;currentIndex++)
        {
            if(comparisonFcn(a[bestIndex],a[currentIndex]))
            {
                bestIndex=currentIndex;
            }
        }
    }

}
bool ascending(int x,int y)
{
    return x>y;
}
bool descending(int x,int y)
{
    return x<y;
}
int main()
{
    int aSize=12;
    int a[aSize];

    srand(time());

    cout<<"The original number without sorting :"<<endl;

    for(int i=0;i<aSize;i++)
    {
        a[i]=(rand()%12);
        cout<<a[i]<<"\t";
    }

    cout<<"The number in ascending order : "<<endl;

    FcnSelection(a,aSize,ascending)

}
