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
	int size;
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
}