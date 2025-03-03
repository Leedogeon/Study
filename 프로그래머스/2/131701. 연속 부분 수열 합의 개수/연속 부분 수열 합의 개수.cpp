#include <string>
#include <vector>
#include <set>
#include <numeric>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
        set<int> num;
    int max = 0;
    for (auto e : elements)
    {
        max += e;
        num.insert(e);
    }
    num.insert(max);
    for (int i = 1; i < elements.size(); i++)
    {
        auto prev = elements.begin();
        auto next = elements.begin() + i;
        int sum = accumulate(prev, next+1, 0);
        for (int j = 0;j< elements.size(); j++)
        {
            

            next++;
            if (next == elements.end())
                next = elements.begin();
            sum += *next;
            sum -= *prev;
            prev++;
            num.insert(sum);
        }
    }
    answer = num.size();
    return answer;
}