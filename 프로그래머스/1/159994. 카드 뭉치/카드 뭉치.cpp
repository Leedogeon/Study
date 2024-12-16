#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    	int c1 = 0;
	int c2 = 0;
	for (auto g : goal)
	{
		if (cards1[c1] == g)
			c1++;
		else if (cards2[c2] == g)
			c2++;
        else break;
	}
	if (c1+c2 == goal.size()) answer = "Yes";
	else answer = "No";
    return answer;
}