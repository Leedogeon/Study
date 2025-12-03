using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(int[] priorities, int location) {
        Queue<KeyValuePair<int, int>> queue = new Queue<KeyValuePair<int, int>>();

        for(int i = 0; i < priorities.Length; i++)
        {
            queue.Enqueue(new KeyValuePair<int, int>(i, priorities[i]));
        }
        int answer = 0;
        while(true)
        {
            if(queue.First().Value == queue.Max(x => x.Value))
            {
                answer++;
                if (queue.First().Key == location)
                {

                    break;
                }
                queue.Dequeue();
            }
            else
            {
                var item = queue.Dequeue();
                queue.Enqueue(item);

            }

        }
        return answer;
    }
}