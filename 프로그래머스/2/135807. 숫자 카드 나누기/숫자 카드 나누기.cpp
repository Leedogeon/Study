#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int GCD(int A, int B)
{
	if (A == 0) return B;
	else
	{
		return GCD(B % A,A);
	}
}

int solution(vector<int> arrayA, vector<int> arrayB) {
    int answer = 0;
    	if (arrayA.size() == 1)
	{
		if (arrayA[0] != arrayB[0]) return max(arrayA[0], arrayB[0]);
	}

	sort(arrayA.begin(), arrayA.end());
	sort(arrayB.begin(), arrayB.end());
	int GCDA = arrayA[0];
	int GCDB = arrayB[0];

	for (int i = 1; i < arrayA.size(); i++)
	{
		GCDA = GCD(GCDA, arrayA[i]);
		GCDB = GCD(GCDB, arrayB[i]);
	}
	if (GCDA == 1 && GCDB == 1)
		return 0;

	bool A = false;
	bool B = false;
	for (int i = 0; i<arrayA.size();i++)
	{
		if (arrayA[i] % GCDB != 0)
			B = true;
		else
		{
			B = false;
			break;
		}
	}
	for (int i = 0; i < arrayB.size(); i++)
	{
		if (arrayB[i] % GCDA != 0)
			A = true;
		else
		{
			A = false;
			break;
		}
	}
	if (A) answer = GCDA;
	if (B) answer = max(GCDA, GCDB);

	return answer;
    return answer;
}