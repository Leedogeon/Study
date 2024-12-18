#include <iostream>
#include <math.h>
using namespace std;
int solution(int n)
{
    int answer = 0;
    int len = 0;
    for(int i = 1;;i++)
    {
        if((int)pow(10,i) >n)
        {
            len = i;
            break;
        }
    }
    len--;
    while (len != -1)
    {
        int p = (int)pow(10, len);
        int num = n / p;
        answer += num;
        n -= num * p;
        len--;
    }
    
    return answer;
}