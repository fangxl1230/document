#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(5, 42);

	for (auto &it : ivec)
	{
		it = it * 2;
		cout << it << endl;
	}
	
	return 0;
}