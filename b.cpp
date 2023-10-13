#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a {1 ,2 , 3, 4 ,5};
	for(auto &c :a )
	{
		cout << c + 1 << endl;
	}
	return 0;
}
