#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    for(long i = 1; ;i++)
    {
        long res = (long)pow(i,2);
        if(res == n)
        {
            answer = (long)pow(i+1,2);
            break;
        }
        
        if(res > n) return -1;
        
    }
    return answer;
}