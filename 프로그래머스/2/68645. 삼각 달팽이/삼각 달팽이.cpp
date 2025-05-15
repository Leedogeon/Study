#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int max = (n + 1) * n / 2;
bool Down = true;
bool Right = false;
bool Up = false;
vector<int> snail(max,0);
snail[0] = 1;
int index = 0;
int num = 2;
int cycle = 0;
while (num <= max)
{
	int next = 0;
	if (Down)
	{
		int i = cycle == 0 ? 1 : cycle * 2;
		for (i; i < n; i++)
		{
			next = index + i;

			if (next >= max)
				break;
			if (snail[next] != 0)
				break;

			index = next;

			snail[index] = num;
			num++;
		}
		Down = false;
		Right = true;

	}
	else if (Right)
	{
		for (int i = 1; i < n; i++)
		{
			next = index + 1;

			if (next >= max)
			{
				break;
			}
			else if (snail[next] != 0)
				break;
			index++;
			snail[index] = num;
			num++;
		}
		Right = false;
		Up = true;
	}
	else if (Up)
	{
		for (int i = n- cycle; i >=0; i--)
		{
			next = index - i;
			if (next <= 0)
				break;
			else if (snail[next] != 0)
				break;
			index -= i;
			snail[index] = num;
			num++;
		}
		Up = false;
		Down = true;
		cycle++;
	}


}


for (auto s : snail)
{
	answer.push_back(s);
}
    return answer;
}