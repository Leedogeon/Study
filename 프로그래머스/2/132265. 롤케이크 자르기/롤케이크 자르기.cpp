#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    vector<int> left(topping.size(),0);
    vector<int> right(topping.size(), 0);
    set<int> leftsize;
    set<int> rightsize;
    
    for (int i = 0; i < topping.size(); i++)
    {
        leftsize.insert(topping[i]);
        left[i] = leftsize.size();
    }
    for (int i = topping.size() - 1; i >= 0; i--)
    {
        rightsize.insert(topping[i]);
        right[i] = rightsize.size();
    }


    for (int i = 0; i < topping.size()-1; i++)
    {
        if (left[i] == right[i+1]) answer++;
    }
    return answer;
}