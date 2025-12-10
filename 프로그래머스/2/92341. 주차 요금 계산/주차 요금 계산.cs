using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] fees, string[] records) {
        Dictionary<string, TimeSpan> dict = new Dictionary<string,TimeSpan>();
SortedDictionary<string, int> money = new SortedDictionary<string, int>();
foreach(var item in records)
{
    string[] temp = item.Split(" ");
    if (temp[2] == "IN")
    {
        dict.Add(temp[1], TimeSpan.Parse(temp[0]));
    }
    else if (temp[2] =="OUT")
    {
        if(dict.ContainsKey(temp[1]))
        {
            TimeSpan dif = TimeSpan.Parse(temp[0]) - dict[temp[1]];
            if(money.ContainsKey(temp[1]))
            {
                money[temp[1]] += (int)dif.TotalMinutes;
            }
            else
            {
                money.Add(temp[1], (int)dif.TotalMinutes);
            }
            dict.Remove(temp[1]);
        }
    }
}
foreach(var item in dict)
{
    string maxTime = "23:59";
    TimeSpan max = TimeSpan.Parse(maxTime);
    TimeSpan dif = max - item.Value;
    if (money.ContainsKey(item.Key))
    {
        money[item.Key] += (int)(dif.TotalMinutes);
    }
    else
    {
        money.Add(item.Key, (int)dif.TotalMinutes);
    }

}
int[] answer = new int[money.Count];
int idx = 0;
foreach(var item in money)
{
    if (item.Value <= fees[0]) answer[idx] = fees[1];
    else
    {
        int plus = ((int)item.Value - fees[0]);
        if (plus % fees[2] == 0)
        {
            answer[idx] = fees[1] + (plus / fees[2]) * fees[3];
        }
        else answer[idx] = fees[1] + ((plus / fees[2]) + 1) * fees[3];
    }
    idx++;
}
        return answer;
    }
}