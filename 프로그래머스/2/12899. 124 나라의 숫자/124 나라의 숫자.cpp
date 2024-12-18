#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    	int q = n;
	int r = 0;
	vector<int> num = { 1,2,4 };
	vector<int> arr;
	string answer = "";
	while(q != 0)
	{
		r = (q - 1) % 3;
		q = (q - 1) / 3;
		
		arr.push_back(num[r]);

	}
	for (int i = arr.size() - 1; i >= 0; i--)
	{
		answer += to_string(arr[i]);
	}
    return answer;
}