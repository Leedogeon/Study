#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    	vector<int> arr = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	vector<string> week = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
	int sum = b;
	for (int i = 0; i < a-1; i++)
	{
		sum += arr[i];
	}
	sum %= 7;
    return week[sum];
}