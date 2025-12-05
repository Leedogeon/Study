using System;

public class Solution {
    public int solution(string skill, string[] skill_trees) {
        int answer = 0;
        foreach(var item in skill_trees)
        {
            bool chk = true;
            int idx = 0;
            for(int i = 0; i<item.Length;i++)
            {
                if(idx >= skill.Length) break;
                if(item[i] == skill[idx])
                {
                    idx++;
                }
                else
                {
                    for(int j = idx+1; j < skill.Length;j++)
                    {
                        if(item[i] == skill[j])
                        {
                            chk = false;
                            break;
                        }
                    }
                }
            }
            if(chk) answer++;
        }
        return answer;
    }
}