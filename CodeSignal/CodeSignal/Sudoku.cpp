#include "main.h"
bool sudoku2(std::vector<std::vector<char>> grid)
{
	bool ret = true;
	map<char, int> maprows;
	map<char, int> mapcolums;
	map<char, int> mapx3;
	// check rows
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(grid[i][j] == '.')
			{
				continue;
			}
			if(maprows.find(grid[i][j]) != maprows.end()) // row and colums
			{
				
				ret = false;
				break;
			}
			else
			{
				
				maprows[grid[i][j]] = 1;
			}
		}
		maprows.clear();
		
	}
	//check columns
	if(ret == true)
	{
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
			{
				if(grid[j][i] == '.')
				{
					continue;
				}
				if(mapcolums.find(grid[j][i]) != mapcolums.end()) // row and colums
				{
				
					ret = false;
					break;
				}
				else
				{
					mapcolums[grid[j][i]] = 1;
				}
			}
			mapcolums.clear();		
		}
	}
	//check maxtrix 3*3
	if(ret == true)
	{
		for(int k = 0; k < 9; k++)
		{
			for(int i = 0; i < 3; i++)
			{
				for(int j = 0; j < 3; j++)
				{
					if(grid[i + (k/3)*3][j +(k%3)*3] == '.')
					{
						continue;
					}
					if(mapx3.find(grid[i + (k/3)*3][j +(k%3)*3]) != mapx3.end())
					{
						ret = false;
						break;
					}
					else
					{
						mapx3[grid[i + (k/3)*3][j +(k %3 ) * 3]] = 1;
					}
				}
				if(ret == false)
				{
					break;
				}
			}
			mapx3.clear();
		}
	}
	return ret;
}