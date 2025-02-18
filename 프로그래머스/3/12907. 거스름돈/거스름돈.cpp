#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> money) {
    int answer = 0;
    vector<int>arr(n+1,0);
    arr[0] = 1;
    for (int m : money)
	{
		for (int j = m; j <= n; j++)
		{
			arr[j] = (arr[j] + arr[j - m]) % 1000000007;
		}
	}
    
    return arr[n];
}