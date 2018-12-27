#include "Questions.h"



Questions::Questions()
{
}


Questions::~Questions()
{
}


int LengthOfString(const char* pMove)
{
	int i = 0;
	while (pMove[i] != '\0')
	{
		i++;
	}
	return i;
}

bool IsInAlphabetRange(char a)
{
	if (a < 'a' || a > 'h')
	{
		return false;
	}
	return true;
}

bool IsInNumericalRange(char num)
{
	if (num < '1' || num > '8')
	{
		return false;
	}

	return true;
}

int CalcAbs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return n;
}

bool isValidBishopMove(const char* pMove)
{
	//conditions where input is invalid
	//length of string == 4
	//assuming Bishops cannot be promoted, anything more than 4 characters would be invalid
	if (LengthOfString(pMove) != 4)
	{
		return false;
	}

	if (!IsInAlphabetRange(pMove[0]) || !IsInAlphabetRange(pMove[2]) || !IsInNumericalRange(pMove[1]) || !IsInNumericalRange(pMove[3]))
	{
		return false;
	}

	int a = CalcAbs(pMove[0] - pMove[2]);
	int b = CalcAbs(pMove[1] - pMove[3]);

	//if the squares are diagonal
	//a is always equal to b
	//if a or b is zero, it is the same square. I am assuming this move is invalid.
	if (a == b && a != 0 && b != 0)
	{
		return true;
	}

	return false;
}


void printSecondMinimum(int arr[], int size)
{
	int first, second;
	first = second = INT_MAX;
	if (size < 2)
	{
		cout << "Need more elements";
		return;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
		}
		else if (arr[i] < second && arr[i] != first)
		{
			second = arr[i];
		}

	}
	cout << "Second minimum is " << second;
}

int firstNonRepeating(int arr[], int size)
{

	for (int i = 0; i < size; ++i)
	{
		int j;
		for (j = 0; j < size; ++j)
		{
			if (i != j && arr[i] == arr[j])
			{
				break;
			}

		}
		if (j == size)
		{
			return arr[i];
		}


	}
	return -1;

}

int findOddOccuringNumer(int arr[], int size)
{
	int res = 0, i;
	for (i = 0; i < size; ++i)
	{
		res ^= arr[i];

	}
	return res;
}
