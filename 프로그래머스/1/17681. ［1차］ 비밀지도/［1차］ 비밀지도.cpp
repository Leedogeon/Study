#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for (int i = 0; i < n; i++)
    {
        string ans = "";
        int q = n - 1;
        int f = arr1[i];
        int s = arr2[i];

        bool temp = false;
        while (f != 0 || s != 0)
        {
            temp = f%2 || s%2;
            f /= 2;
            s /= 2;
            
            if (temp)
                ans += "#";
            else ans += " ";
        }
        if (ans.size() != n)
        {
            while (ans.size() != n)
            {
                ans += " ";
            }
        }

        reverse(ans.begin(), ans.end());
        answer.push_back(ans);
    }
    return answer;
}