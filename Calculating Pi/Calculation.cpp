#include "Calculation.h"
#include <string>
#include <iostream>
#include <stack>
using namespace std;


Calculation::Calculation(string exp)
{
    postfixEval(exp);
}

void Calculation::postfixEval(string exp)
{
    stack<float> operands;

	// traverse the given expression
	for (int i = 0; i < exp.length(); i++)
	{
		// if current char is an operand, push it to the stack
		if (exp[i] >= '0' && exp[i] <= '9') {
			operands.push(exp[i] - '0');
		}
		// if current char is an operator
		else
		{
			// pop top two elements from the stack
			float x = operands.top();
			operands.pop();

			float y = operands.top();
			operands.pop();

			// evaluate the expression x op y, and push the
			// result back to the stack
			if (exp[i] == '+')
				operands.push(y + x);



			else if (exp[i] == '/')
			{
				float ans;
				ans=(y*x)/(y+x);
				operands.push(ans);
			}

		}
	}

	// At this point, the stack is left with only one element
	// i.e. expression result
	ans = operands.top();
}
float Calculation::getAns()
{
    return ans;
}

