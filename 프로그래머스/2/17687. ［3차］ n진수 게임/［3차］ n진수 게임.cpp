#include <string>
#include <vector>

using namespace std;

string solution(int n, int t, int m, int p) {
        int cnt = 0;
    int i = 0;
    string num = "";
    char arr[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while (true)
    {
        int res = i;
        string rnum = "";
        if (i == 0)
        {
            if ((cnt%m +1) == p) num += '0';
            i++;
            cnt++;
            continue;
        }

        while (res != 0)
        {
            rnum += arr[res % n];
        
            res /= n;
        }

        for (int j = rnum.size() - 1; j >= 0; j--)
        {
            if ((cnt % m + 1) == p) num += rnum[j];
            cnt++;
            if (num.size() == t) break;

        }


        if (num.size() == t) break;

        i++;
    }
    return num;
}