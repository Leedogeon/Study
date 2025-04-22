#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    	for (int i = 0; i < arr1.size(); i++)
	{
		vector<int> line;
		
		for (int q = 0; q < arr2[0].size(); q++)
		{
			int sum = 0;

			for (int j = 0; j < arr1[0].size(); j++)
			{
				sum += arr1[i][j] * arr2[j][q];
				
			}
			line.push_back(sum);
		}
		answer.push_back(line);

	}
    return answer;
}