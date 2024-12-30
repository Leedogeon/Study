#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    if(s.size()%2 == 1) return 0;
        stack<int> prev_index;
    
    for (int i = 0; i < s.size();i++)
    {
        
        if (!prev_index.empty() && s[prev_index.top()] == s[i])
        {
            prev_index.pop();
        }
        else
        {
            prev_index.push(i);
        }
        
    }
    if(prev_index.empty()) return 1;
    else return 0;
}