#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    auto it = min_element(arr.begin(), arr.end());

    arr.erase(it);
    if(arr.empty()) return {-1};
    return arr;
}