#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void BubbleUp(int* A, int Size)
{
	for (int i = 0; i < Size - 1; i++)
	{
		if (A[i] > A[i + 1])
		{
			Swap(A[i], A[i + 1]);
		}
	}
}

void BubbleSort_A(int* A, int Size)
{
	for (int i = 0; i < Size - 1; i++)
	{
		BubbleUp(A, Size);
	}
}


void BubbleSort_B(int* A, int Size)
{
	for (int i = 0; i < Size - 1; i++)
	{
		BubbleUp(A, Size - i);
	}
}

bool BubbleUpBool(int* A, int Size)
{
	int Swap_Happened = false;
	for (int i = 0; i < Size - 1; i++)
	{
		if (A[i] > A[i + 1])
		{
			Swap_Happened = true;
			Swap(A[i], A[i + 1]);
		}
	}
	return Swap_Happened;
}

void BubbleSort_C(int* A, int Size)
{
	while (BubbleUpBool(A, Size--));

}

void BubbleUpWithVector(vector<int>& A)
{
	for (int i = 0; i < A.size() - 1; i++)
	{
		if (A[i] > A[i + 1])
		{
			Swap(A[i], A[i + 1]);
		}
	}
}

void BubbleSort_AWithVector(vector<int>& A)
{
	for (int i = 0; i < A.size() - 1; i++)
	{
		BubbleUpWithVector(A);
	}
}

void BubbleSort_BWithVector(vector<int>& A)
{
	for (int i = 0; i < A.size() - 1; i++)
	{
		BubbleUpWithVector(A);
	}
}

bool BubbleUpBoolWithVector(vector<int>& A)
{
	int Swap_Happened = false;
	for (int i = 0; i < A.size() - 1; i++)
	{
		if (A[i] > A[i + 1])
		{
			Swap_Happened = true;
			Swap(A[i], A[i + 1]);
		}
	}
	return Swap_Happened;
}

void BubbleSort_CWithVector(vector<int>& A)
{
	while (BubbleUpBoolWithVector(A));

}

int SelectMinIndexWithinRange(int* A, int size, int si, int ei)
{
	int MinIndex = si;
	for (int i = si + 1; i <= ei; i++)
	{
		if (A[MinIndex] > A[i])
		{
			MinIndex = i;
		}
	}
	return MinIndex;
}

void SelectionSort(int* A, int size)
{
	int mini;
	for (int j = 0; j < size; j++)
	{
		mini = SelectMinIndexWithinRange(A, size, j, size - 1);
		Swap(A[mini], A[j]);
	}
}

int SelectMinIndexWithinRangeWithVectors(vector<int>  A, int si, int ei)
{
	int MinIndex = si;
	for (int i = si + 1; i <= ei; i++)
	{
		if (A[MinIndex] > A[i])
		{
			MinIndex = i;
		}
	}
	return MinIndex;
}

void SelectionSort(vector<int>& A)
{
	int mini;
	for (int j = 0; j < A.size(); j++)
	{
		mini = SelectMinIndexWithinRangeWithVectors(A, j, A.size() - 1);
		Swap(A[mini], A[j]);
	}
}


void InsertInSortedSubarray(int* A, int ii)
{
	for (int x = ii; x > 0; x--)
	{
		if (A[x - 1] > A[x])
		{
			Swap(A[ii - 1], A[ii]);
		}
	}
}


void InsertInSortedSubarrayWithVector(vector<int>& A, int ii)
{
	for (int x = ii; x > 0; x--)
	{
		if (A[x - 1] > A[x])
		{
			Swap(A[ii - 1], A[ii]);
		}
	}
}


void InsertionSort(int* A, int size)
{
	for (int i = 1; i <= size - 1; i++)
	{
		InsertInSortedSubarray(A, i);
	}
}
void InsertionSortWithVectors(vector<int>& A)
{
	for (int i = 1; i <= A.size() - 1; i++)
	{
		InsertInSortedSubarrayWithVector(A, i);
	}
}



void main()
{
	

}