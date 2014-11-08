#include "stdafx.h"
#include <iostream>
using namespace std;

void insertionSort(int* arr, int arr_size)
{
	cout << "Insertion Sort called "<<endl;
	cout << "\tInfo: UnSorted Array : ";
	for (int i=0 ; i<arr_size ; i++)
		cout << arr[i]<<" ";
	cout <<endl;

	for( int i=1 ; i< arr_size ; i++) 
	{
		int j = i-1;
		while(j>=0 && arr[i]< arr[j]) { j--; }
		int temp = arr[i];
		for (int k=i;k>j+1;k--) { arr[k] = arr[k-1]; }
		arr[j+1] = temp;
	}

	cout << "\tInfo: Sorted Array   : ";
	for (int i=0 ; i<arr_size ; i++)
		cout << arr[i]<<" ";
	cout <<endl;
	cout <<endl;
}