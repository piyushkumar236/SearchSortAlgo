#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int* pval1, int* pval2) 
{
	*pval1 = (*pval1)^(*pval2);
	*pval2 = (*pval1)^(*pval2);
	*pval1 = (*pval1)^(*pval2);
}

void selectionSort(int* arr, int arr_size) 
{
	cout << "Selection Sort called "<<endl;
	cout << "\tInfo: UnSorted Array : ";
	for (int i=0 ; i<arr_size ; i++)
		cout << arr[i]<<" ";
	cout <<endl;
	
	for (int i=0 ; i<(arr_size-1) ; i++) {
		int min_ind = i ;
		for (int j=(i+1);j<arr_size;j++) 
		{
			if (arr[j] < arr[min_ind]) {min_ind = j;}
		}
		if (i!=min_ind) 
			swap(&arr[i],&arr[min_ind]);
	}
	cout << "\tInfo: Sorted Array   : ";
	for (int i=0 ; i<arr_size ; i++)
		cout << arr[i]<<" ";
	cout << endl;
	cout <<endl;
}

