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
	binarySearch(marr, ARRAY_SIZE, 3);
	
	
	getch();
	return 0;
}
