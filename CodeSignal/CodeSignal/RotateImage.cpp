#include"main.h"
std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a)
{
	int temp;
	std::vector<std::vector<int>> b;
	for(int i = 0; i < a.size(); i++)
	{
		for(int j = 0; j < a[0].size(); j++)
		{
			temp = a[i][j];
			
			a[i][j] = a[a.size() - j - 1][i];
			a[a.size() - i -1][a.size() - j - 1] = temp;
		}
	}
	
	return a;
}