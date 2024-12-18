#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    
    if(a==b) return a;
    
    for(int i = min; i <= max; i++)
        answer += i;
    return answer;
}