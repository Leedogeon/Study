using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(string[] want, int[] number, string[] discount) {
int answer = 0;
Dictionary<string, int> dict = new Dictionary<string, int>();
Queue<string> queue = new Queue<string>();

for (int i = 0; i < want.Length; i++)
{
    dict[want[i]] = number[i];
    
}
Dictionary<string, int> dict2 = new Dictionary<string, int>(dict);


for (int i = 0; i < discount.Length; i++)
{
    if (!dict.ContainsKey(discount[i]))
    {
        dict2 = new Dictionary<string, int>(dict);
        queue.Clear();
        continue;
    }


    if (queue.Count < 10)
    {
        queue.Enqueue(discount[i]);
        dict2[discount[i]] -= 1;
    }
    else if (queue.Count == 10)
    {
        queue.Enqueue(discount[i]);
        dict2[queue.Dequeue()] += 1;
        dict2[discount[i]] -= 1;
    }


    bool chk = true;
    foreach (var item in dict2)
    {
        if (item.Value != 0)
        {
            chk = false;
            break;
        }
    }
    if (chk) answer++;

}
        
        return answer;
    }
}