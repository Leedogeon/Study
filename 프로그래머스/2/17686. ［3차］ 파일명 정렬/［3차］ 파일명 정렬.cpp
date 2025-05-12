#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> files) {
    vector<string> answer;
    	vector<vector<string>> arr;


	for (auto f : files)
	{
		vector<string> sum;
		string head = "";
		string num = "";
		string tail = "";
		bool fst = true;
		bool snd = false;
		bool trd = false;
		for (auto q : f)
		{

			if (isdigit(q))
			{
				if (fst && !snd)
				{
					fst = false;
					snd = true;
				}
			}

			if (snd)
			{
				if (!isdigit(q))
				{
					snd = false;
					trd = true;
				}
			}

			if (fst)
			{
				head += q;
			}
			else if (snd)
			{
				num += q;
			}
			else if (trd)
			{
				tail += q;
			}

		}
		sum.push_back(head);
		sum.push_back(num);
		sum.push_back(tail);

		arr.push_back(sum);
	}

	stable_sort(arr.begin(), arr.end(), [](const vector<string>& prev,const vector<string>& next)
		{
			string a = prev[0], b = next[0];
			transform(a.begin(), a.end(), a.begin(), ::tolower);
			transform(b.begin(), b.end(), b.begin(), ::tolower);

			if (a != b)
			{
				return a<b;
			}
			else return stoi(prev[1]) < stoi(next[1]);

		});




	for (auto a : arr)
	{
		string temp = a[0] + a[1] + a[2];
		answer.push_back(temp);
	}
    return answer;
}