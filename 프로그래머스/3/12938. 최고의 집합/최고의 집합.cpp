#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
  	if (n > s) return {-1};
	int avg{ s / n }, res{ s % n };

	vector<int> left(n - res, avg);
    vector<int> right(res, avg + 1);
	left.insert(left.end(), right.begin(), right.end());
    
    return left;
}