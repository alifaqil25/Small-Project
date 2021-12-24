#include "Conversion.h"
#include <stack>
#include <iostream>


Conversion::Conversion(string s)
{
    formula=infixConversion(s);
}

void Conversion::infixConversion(string s)
{
    stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for(int i = 0; i < l; i++)
    {

        if(isdigit(s[i]))
        ns+=s[i];

        else{
            while(!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }

    }
    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }

}

int precedence(char c)
{

    if(c == '/')
    return 2;
    else if(c == '+')
    return 1;
    else
    return -1;
}


