using System;

class Solution
{
    public long solution(int price, int money, int count)
    {
        long max = (count*(count+1))/2;
        return money >= price*max ? 0 : price*max - money;
    }
}