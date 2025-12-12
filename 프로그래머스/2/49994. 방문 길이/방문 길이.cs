using System;
using System.Collections.Generic;
public class Solution {
    
public int solution(string dirs) {
        int answer = 0;
        Dictionary<Coord, List<Coord>> dict = new Dictionary<Coord, List<Coord>>();

        Coord prev = new Coord(0, 0);
        Coord next = new Coord(0, 0);

        foreach (var item in dirs)
        {
            next = prev;

            if (item == 'R')
            {
                if (prev.X < 5)
                {
                    next.X += 1;
                    Insert(dict, prev, next, ref answer);
                }
            }
            else if (item == 'L')
            {
                if (prev.X > -5)
                {
                    next.X -= 1;
                    Insert(dict, prev, next, ref answer);
                }
            }
            else if (item == 'U')
            {
                if (prev.Y < 5)
                {
                    next.Y += 1;
                    Insert(dict, prev, next, ref answer);
                }
            }
            else if(item == 'D')
            {
                if (prev.Y > -5)
                {
                    next.Y -= 1;
                    Insert(dict, prev, next, ref answer);
                }
            }
            prev = next;
        }

        return answer;
    }
    void Insert(Dictionary<Coord, List<Coord>> dict, Coord prev, Coord next, ref int answer)
    {
        if(dict.ContainsKey(prev))
        {
            if (dict[prev].Contains(next) )
            {
                return;
            }
        }

        if(!dict.ContainsKey(prev))
        {
            dict[prev] = new List<Coord>();
        }
        dict[prev].Add(next);

        if(!dict.ContainsKey(next))
        {
            dict[next] = new List<Coord>();
        }
        dict[next].Add(prev);

        answer++;
    }
public struct Coord
{
    public int X { get; set; }
    public int Y { get; set; }

    public Coord(int x, int y)
    {
        X = x;
        Y = y;
    }
}
}