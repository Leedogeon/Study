#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    	vector<int> answer(numbers.size(), -1);
	vector<int> Index(numbers.size(), -1);
	int Max = -1;
	int MaxIndex = 0;
    	for (int i = numbers.size() - 1; i >= 0; i--)
	{
		if (numbers[i] >= Max)
		{
			Max = numbers[i];
			Index[i] = i;
			MaxIndex = i;
		}
		else
		{
			for (int j = i + 1; j <= MaxIndex;)
			{
				if (numbers[i] < numbers[j])
				{
					answer[i] = numbers[j];
					Index[i] = j;
					break;
				}
				else
				{
					j = Index[j];
				}
			}
		}
	}
    return answer;
}