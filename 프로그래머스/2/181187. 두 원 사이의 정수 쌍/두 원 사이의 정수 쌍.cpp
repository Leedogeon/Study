#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(int r1, int r2) {
    long long answer = 0;
    
	for (int i = 0;i<r2; i++)
	{
		if (i < r1)
		{
			answer += floor(sqrt(pow(r2,2) - pow(i,2))) - ceil(sqrt(pow(r1,2) - pow(i,2))) +1;
		}
		else answer += floor(sqrt(pow(r2,2) -pow(i,2)));
		
	}
    return answer*4;
}