#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    	map<int, string> num;
	map<string, int> name;

	for (int i = 0; i < players.size(); i++)
	{
		num.insert({ i,players[i] });
		name.insert({players[i],i });
	}

	for (auto c : callings)
	{
		int n = name[c];
		string n1 = num[n-1];
		
		name.erase(c);
		name.erase(n1);
		name.insert({ c,n - 1});
		name.insert({ n1,n });


		num.erase(n - 1);
		num.erase(n);
		num.insert({ n,n1 });
		num.insert({ n-1,c});

	}
	for (auto n : num)
	{
		answer.push_back(n.second);
	}
    return answer;
}