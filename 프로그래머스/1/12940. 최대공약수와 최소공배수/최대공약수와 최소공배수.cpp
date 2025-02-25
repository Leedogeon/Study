#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
	int lcm = n * m;
	int q = n >= m ? n : m;
	int r = q != n ? n : m;

	while (true)
	{
		int temp = q % r;
		if (q % r == 0) break;
		q = r;
		r = temp;
	}
    answer.push_back(r);
    answer.push_back(lcm/r);
    
    return answer;
}