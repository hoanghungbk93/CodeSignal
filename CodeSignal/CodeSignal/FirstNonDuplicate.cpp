#include "main.h"
char firstNotRepeatingCharacter(std::string s) {
   map<char, int> map;
   int min = 100000;
	int flag = 0;
	char ret = '_';
	for(int i = 0; i < s.length(); i++)
	{
		if(map.find(s[i]) == map.end())
		{
			map[s[i]] = i;
		}
		else
		{
			map[s[i]] = 100000;
		}
	}
	
	 for (auto& x: map)
	 {
		if(x.second != 100000)
		{
			if(x.second < min)
			{
				min = x.second;
			}
		}
	 }
	 if(min != 100000)
	 {
		ret = s[min];
	 }
	return ret;
}