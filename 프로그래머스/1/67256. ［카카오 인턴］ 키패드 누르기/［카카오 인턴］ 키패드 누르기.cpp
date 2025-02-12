#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    	vector<vector<pair<int, int>>> keypad(10);
	int x = 0;
	int y = 0;

	keypad[0].push_back({ 3,1 });
	for (int i = 1; i <= 9; i++)
	{
		keypad[i].push_back({ y,x });


		if (x < 2) x++;
		else
		{
			y++;
			x = 0;
		}
	}
	int culR[2] = { 3,2 };
	int culL[2] = { 3,0 };

	for (auto n : numbers)
	{
		if (n == 1 || n == 4 || n == 7)
		{
			answer += "L";
			culL[0] = keypad[n].front().first;
			culL[1] = keypad[n].front().second;
		}
		else if (n == 3 || n == 6 || n == 9)
		{
			answer += "R";
			culR[0] = keypad[n].front().first;
			culR[1] = keypad[n].front().second;
		}
		else
		{
			int resL = abs(keypad[n].front().first - culL[0]) + abs(keypad[n].front().second - culL[1]);
			int resR = abs(keypad[n].front().first - culR[0]) + abs(keypad[n].front().second - culR[1]);

			bool LR = resL > resR ? true : false;
			if (resL == resR) LR = (hand == "right") ? true : false;

			if (LR)
			{
				answer += "R";
				culR[0] = keypad[n].front().first;
				culR[1] = keypad[n].front().second;
			}
			else
			{
				answer += "L";
				culL[0] = keypad[n].front().first;
				culL[1] = keypad[n].front().second;
			}
		}


	}
    return answer;
}