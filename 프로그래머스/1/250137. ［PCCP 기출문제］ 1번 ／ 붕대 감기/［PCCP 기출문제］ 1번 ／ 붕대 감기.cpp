#include <string>
#include <vector>

using namespace std;
void heal(int& health, int maxhealth, vector<int> bandage, vector<vector<int>> attacks, int cur, int start)
{
	int count = 0;
	for (int j = start; j < start + bandage[0]; j++)
	{
		if (j == attacks[cur + 1].front()) break;

		health += bandage[1];
		if (health >= maxhealth)
		{
			health = maxhealth;
			break;
		}
		count++;
	}
	if (count == bandage[0])
	{
		health += bandage[2];
		if (health >= maxhealth) health = maxhealth;
	}

	if (health < maxhealth && start+bandage[0] < attacks[cur+1].front())
	{
		heal(health, maxhealth, bandage, attacks, cur, start+bandage[0]);
	}

}
int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int maxhealth = health;
for (int i = 0; i < attacks.size(); i++)
{
	int count = 0;
	health -= attacks[i].back();
    if(health <= 0) break;
	if (i == attacks.size() - 1) break;
	heal(health, maxhealth, bandage, attacks, i, attacks[i].front()+1);
}
    if(health > 0) return health;
    else return -1;
}