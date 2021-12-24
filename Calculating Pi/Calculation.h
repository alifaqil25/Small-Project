#ifndef CALCULATION_H
#define CALCULATION_H
#include <string>


using namespace std;

class Calculation
{
    public:
        Calculation(string);
        void postfixEval(string);
        float getAns();


    protected:

    private:
        float ans;
};

#endif // CALCULATION_H
