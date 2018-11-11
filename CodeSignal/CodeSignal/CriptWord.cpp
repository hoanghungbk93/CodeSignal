#include "main.h"
char criptValue(char character, std::vector<std::vector<char>> solution)
{
	char ret;
	for(int i = 0; i < solution.size(); i++)
	{
		if(character == solution[i][0])
		{
			ret = solution[i][1];
			break;
		}
	}
	return ret;
}
int criptOneWord(string word, std::vector<std::vector<char>> solution)
{
	int ret = -1;
	string criptWord="";
	for(int i = 0 ; i< word.length(); i++)
	{
		char c = criptValue(word[i], solution);
		criptWord += c;
	} 
	if(criptWord[0] == '0' && criptWord.length() > 1)
	{
		ret = -1;
	}
	else
	{
		ret = atoi(criptWord.c_str());
	}
	return ret;
}
bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
	bool ret = false;
	int word1 = criptOneWord(crypt[0], solution); 
	int word2 = criptOneWord(crypt[1], solution); 
	int word3 = criptOneWord(crypt[2], solution); 
	if(-1 == word1|| -1 == word2)
	{
		ret = false;
	}
	else if((word1 + word2) == word3)
	{
		ret = true;
	}
	return ret;
}
