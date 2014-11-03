#include "stdafx.h"
#include <iostream>
using namespace std;

#include "searchsort_accessories.h"

void bubbleSort(int* arr, int arr_size)
{
	cout << "Bubble Sort called "<<endl;
	cout << "\tInfo: UnSorted Array : ";
	for (int i=0 ; i<arr_size ; i++)
		cout << arr[i]<<" ";
	cout <<endl;

	int isSwap = 1;
	while (isSwap)
	{
		isSwap = 0;
		for(int i=0 ; i<(arr_size-1) ; i++)
		{
			if ( arr[i+1] < arr[i] ) { swap(&arr[i], &arr[i+1]); isSwap = 1; }
		}
	}

	cout << "\tInfo: Sorted Array   : ";
	for (int i=0 ; i<arr_size ; i++)
		cout << arr[i]<<" ";
	cout <<endl;
	cout <<endl;

}