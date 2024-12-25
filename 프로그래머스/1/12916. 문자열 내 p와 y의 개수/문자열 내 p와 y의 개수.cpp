#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int num1 = 0;
    int num2 = 0;
    
    for(int i = 0; i<s.size();i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
        {
            num1++;
        }
        else if(s[i] == 'y' || s[i] == 'Y')
        {
            num2++;
        }
    }
    
    

    return num1==num2;
}