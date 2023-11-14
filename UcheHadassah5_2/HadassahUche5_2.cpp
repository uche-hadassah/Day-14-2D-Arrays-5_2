/*Name: Uche Hadassah
This program prints a 2-D array that looks like:
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
[10][10]   [5][5]
 */
#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 100;
	int size;
	char squareArray[SIZE][SIZE];
	//Receiving the dimension of the square array from the user
	cout << "Enter the size of the square array:";
	do
	{
		cin >> size;
		while (size < 1 || size > SIZE)
		{
			cout << "Invalid! Enter a valid size(from 1 to 100 included): ";
			cin >> size;
		}
	} while (size < 1 || size > SIZE);//Verifying user input
	//Initialize all the elements in the array to '-'
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			squareArray[i][j] = '-';
		}
	}
	//Set all the diagonals to '*'
	for (int i = 0; i < size; i++)
	{
			squareArray[i][i] = '*';//All situations where we have [i][i] will be set to '*'
			squareArray[i][size - 1 - i] = '*';//Same for this
	}
	//Output the square array
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << squareArray[i][j];
		}
		cout << endl;
	}
	return 0;
}