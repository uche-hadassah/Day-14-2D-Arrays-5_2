/*Write a program that creates and prints a two-dimensional square array that looks 
as the following examples:
*--------* 
-*------*- 
--*----*-- 
---*--*--- 
----**---- 
----**---- *---*
---*--*--- -*-*-
--*----*-- --*--
-*------*- -*-*-
*--------* *---*
for 10 rows and 10 columns for 5 rows and 5 columns*/
#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 100;
	int size;
	char squareArray[SIZE][SIZE];
	cout << "Enter the size of the square array:";
	do
	{
		cin >> size;
		while (size < 1)
		{
			cout << "Invalid! Enter size: ";
			cin >> size;
		}
	} while (size < 1);
	//Initialize all the elements in the array to -
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			squareArray[i][j] = '-';
		}
	}
	//Set all the diagonals to *
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			squareArray[i][i] = '*';
			squareArray[i][j - 1 - i] = '*';
		}
	}
}