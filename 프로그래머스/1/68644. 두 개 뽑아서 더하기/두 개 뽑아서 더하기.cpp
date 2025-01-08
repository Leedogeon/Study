#include <string>
#include <vector>
#include<set>
#include<map>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
        set<int> sArr;
    map<int, int> arr;

    for (auto n : numbers)
    {
        arr[n]++;
    }

    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        if (it->second != 1) sArr.insert(it->first*2);
        auto itt = it;
        itt++;
        for (; itt != arr.end(); itt++)
        {
            sArr.insert(it->first + itt->first);
        }
    }
    for (auto s : sArr)
    {
        answer.push_back(s);
    }
    return answer;
}