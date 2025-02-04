#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include<numeric>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    	sort(nums.begin(), nums.end());
	int sum = accumulate(nums.begin(), nums.end(),0);
	vector<int> arr = { 2,3 };

	for (int i = 4; i <= sum; i++)
	{
		int chk = false;
		for (int j = 0; j < arr.size(); j++)
		{
			
			if ((int)sqrt(i) < arr[j]) break;

			if (i % arr[j] != 0) chk = true;
			else
			{
				chk = false;
				break;
			}
		}
		if (chk) arr.push_back(i);
	}


	vector<bool> mask(nums.size(), false);
	fill(mask.end() - 3, mask.end(), true);

	do{
		int sum = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (mask[i]) sum += nums[i];
			
		}
		if (find(arr.begin(), arr.end(), sum) != arr.end())
			answer++;
	} while (next_permutation(mask.begin(), mask.end()));

    return answer;
}