#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    	bool chk = false;

    if ((bill[0] <= wallet[0] && bill[1] <= wallet[1]) || (bill[0] <= wallet[1] && bill[1] <= wallet[0]))
        return answer;
	while (!chk)
	{
		if (bill[0] >= bill[1])
			bill[0] /= 2;
		else
			bill[1] /= 2;

		answer++;


		if ((bill[0] <= wallet[0] && bill[1] <= wallet[1]) || (bill[0] <= wallet[1] && bill[1] <= wallet[0]))
			chk = true;
	}
    return answer;
}