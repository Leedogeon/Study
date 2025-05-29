#include <string>
#include <vector>
using namespace std;

string solution(string new_id) {
    string temp1 = "";
string temp2 = "";
for (auto n : new_id)
{
	if (isupper(n)) temp1 += n + 32;
    else if (islower(n)) temp1 += n;
	else if (isdigit(n)) temp1 += n;
	else if (n != '.' && n != '-' && n != '_') continue;
	else temp1 += n;
}

int cnt = 0;
for (auto n : temp1)
{
	if (n == '.') cnt++;
	else
	{
		if (cnt >= 1)
		{
			temp2 += '.';
			cnt = 0;
		}
		temp2 += n;
	}
}

if (!temp2.empty() && temp2.front() == '.') temp2.erase(0, 1);
if (!temp2.empty() && temp2.back() == '.') temp2.erase(temp2.size() - 1, 1);
if (temp2.empty()) temp2 += 'a';

if (temp2.size() >= 16)
	temp2.erase(15);
if (temp2.back() == '.') temp2.erase(temp2.size() - 1, 1);

if (temp2.size() <= 2)
	temp2.append(3 - temp2.size(),temp2.back());
return temp2;
}