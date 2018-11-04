#include "main.h"
bool checkDuplicateArr(char grid[9][], int n)
{
	bool ret = true;

	map<char, int> maprows;
	map<char, int> mapcolums;
	// check rows
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(grid[i][j] == '.')
			{
				continue;
			}
			if(maprows.find(grid[i][j]) != maprows.end())
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
}
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
			if(grid[i][j] == '.' || grid[j][i] == '.')
			{
				continue;
			}
			if(maprows.find(grid[i][j]) != maprows.end() || mapcolums.find(grid[j][i]) != mapcolums.end()) // row and colums
			{
				
				ret = false;
				break;
			}
			else
			{
				
				maprows[grid[i][j]] = 1;
				mapcolums[grid[j][i]] = 1;
			}
		}
		mapcolums.clear();
		maprows.clear();
		
	}
	//check columns
	if(ret == true)
	{
		for(int i =0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
			{
				
			}
		}
	}
	return ret;
}