#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    	sort(A.rbegin(), A.rend());
	sort(B.rbegin(), B.rend());

	auto Ait = A.begin();
	auto Bit = B.begin();

	while (Ait != A.end() && Bit!=B.end())
	{		
		if (*Ait < *Bit)
		{
			answer++;
			Ait++;
			Bit++;
		}
        else
			Ait++;
	}
    return answer;
}