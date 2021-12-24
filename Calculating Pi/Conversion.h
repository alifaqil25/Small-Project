#ifndef CONVERSION_H
#define CONVERSION_H
#include <string>
using namespace std;


class Conversion
{

    public:
        Conversion(string);
        void infixConversion(string);
        int precedence(char);
        void setFormula();
        string getFormula();
        friend class Calculation;

    private:
        string formula;
};

#endif // CONVERSION_H
