#include"main.h"
std::vector<char> makeVectorByArray(char arr[] )
{
  	std::vector<char > vector(arr, arr + 9);
	return vector;
}
int main()
{
	char arr1[9] ={'.', '.', '.', '1', '4', '.', '.', '2', '.'};
	char arr2[9] ={'.', '.', '6', '.', '.', '.', '.', '.', '.'};
	char arr3[9] ={'.', '.', '.', '.', '.', '.', '.', '.', '.'};
	char arr4[9] ={'.', '.', '1', '.', '.', '.', '.', '.', '.'};
	char arr5[9] ={'.', '6', '7', '.', '.', '.', '.', '.', '9'};
	char arr6[9] ={'.', '.', '.', '.', '.', '.', '8', '1', '.'};
	char arr7[9] ={'.', '3', '.', '.', '.', '.', '.', '.', '6'};
	char arr8[9] ={'.', '.', '.', '.', '.', '7', '.', '.', '.'};
	char arr9[9] ={'.', '.', '.', '5', '.', '.', '.', '7', '.'};
	//char arr1[9] = {'.','4','.','.','.','.','.','.','.'}; 
	//char arr2[9] = {'.','.','4','.','.','.','.','.','.'}; 
	//char arr3[9] = {'.','.','.','1','.','.','7','.','.'}; 
	//char arr4[9] = {'.','.','.','.','.','.','.','.','.'}; 
	//char arr5[9] = {'.','.','.','3','.','.','.','6','.'}; 
	//char arr6[9] = {'.','.','.','.','.','6','.','9','.'}; 
	//char arr7[9] = {'.','.','.','.','1','.','.','.','.'}; 
	//char arr8[9] = {'.','.','.','.','.','.','2','.','.'}; 
	//char arr9[9] = {'.','.','.','8','.','.','.','.','.'};
	std::vector<char> vtor1 = makeVectorByArray(arr1);
	std::vector<char> vtor2 = makeVectorByArray(arr2);
	std::vector<char> vtor3 = makeVectorByArray(arr3);
	std::vector<char> vtor4 = makeVectorByArray(arr4);
	std::vector<char> vtor5 = makeVectorByArray(arr5);
	std::vector<char> vtor6 = makeVectorByArray(arr6);
	std::vector<char> vtor7 = makeVectorByArray(arr7);
	std::vector<char> vtor8 = makeVectorByArray(arr8);
	std::vector<char> vtor9 = makeVectorByArray(arr9);

	vector<vector<char>> vtorc ;
	vtorc.push_back(vtor1);
	vtorc.push_back(vtor2);
	vtorc.push_back(vtor3);
	vtorc.push_back(vtor4);
	vtorc.push_back(vtor5);
	vtorc.push_back(vtor6);
	vtorc.push_back(vtor7);
	vtorc.push_back(vtor8);
	vtorc.push_back(vtor9);
	bool b = sudoku2(vtorc);
	system("pause");
}

