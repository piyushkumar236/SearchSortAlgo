// SearchSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

#include "searchsort.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int marr[ARRAY_SIZE];

	for (int i = 0;i < ARRAY_SIZE; i++) { marr[i] = unsortedArray[i];}
	selectionSort(marr, ARRAY_SIZE);
	//The sorted array is given as an input to Binary Search.
	binarySearch(marr, ARRAY_SIZE, 20);

	for (int i = 0;i < ARRAY_SIZE; i++) { marr[i] = unsortedArray[i];}
	bubbleSort(marr, ARRAY_SIZE);

	for (int i = 0;i < ARRAY_SIZE; i++) { marr[i] = unsortedArray[i];}
	insertionSort(marr, ARRAY_SIZE);

	getch();
	return 0;
}
