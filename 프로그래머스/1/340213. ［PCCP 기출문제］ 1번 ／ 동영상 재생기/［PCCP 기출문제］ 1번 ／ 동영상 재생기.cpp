#include <string>
#include <vector>
#include <math.h>
using namespace std;

int SetTimeToInt(string time)
{
    int times = (time[0]-'0') * 1000 + (time[1]-'0') * 100 + (time[3]-'0') * 10 + (time[4]-'0');

    return times;
}

string SetTimeToString(int time)
{
    string res = "";

    for(int i =3;i>=0;i--)
    {
        if (i == 1) res += ":";
        int input = time / (int)pow(10, i);
        time -= input * (int)pow(10, i);
        res += to_string(input);
        
    }

    return res;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    int len = SetTimeToInt(video_len);
    int now = SetTimeToInt(pos);
    int start = SetTimeToInt(op_start);
    int end = SetTimeToInt(op_end);


    if (now >= start && now <= end) now = end;
    for (auto c : commands)
    {
        
        if (c == "next")
        {
            if ((len - now) < 10) now = len;
            else
            {
                now += 10;

                if (now % 100 >= 60) now += 40;
                if (now > len) now = len;
            }
        }

        if (c == "prev")
        {
            if (now < 10) now = 0;
            else
            {
                now -= 10;
                
                if (now % 100 >= 60) now -= 40;
            }
        }

        if (now >= start && now <= end) now = end;
    }

    return SetTimeToString(now);
}