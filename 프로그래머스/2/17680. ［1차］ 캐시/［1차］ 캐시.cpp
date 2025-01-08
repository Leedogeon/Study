#include <string>
#include <vector>
#include<map>
#include<algorithm>
#include <climits>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
        map<string, int> arr;

    if (cacheSize == 0)
    {
        return cities.size() * 5;
    }


    for (int i = 0; i < cities.size(); i++)
    {
        int del = INT_MAX;
        string delc = "";
        string city = "";
        for (auto c : cities[i])
        {
            city += toupper(c);
        }

        if (arr.empty())
        {
            arr[city] = i;
            answer += 5;
            continue;
        }

        if (arr.find(city) != arr.end())
        {
            arr[city] = i;
            answer += 1;
        }
        else
        {
            if (arr.size() == cacheSize)
            {
                for (auto a : arr)
                {
                    if (a.second < del)
                    {
                        del = a.second;
                        delc = a.first;
                    }
                }

                arr.erase(delc);
            }

            arr[city] = i;
            answer += 5;
        }

    }
    return answer;
}