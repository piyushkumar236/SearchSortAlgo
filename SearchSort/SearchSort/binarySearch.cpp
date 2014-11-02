#include "stdafx.h"
#include <iostream>
using namespace std;

int binarySearchRecursive(int* arr, int l, int h, int key)
{
	if (h == l) 
	{
		if (key == arr[h]) { cout << "\tInfo: Element is present at location : " << h <<endl;  return h;  }
		else               { cout <<"\tErr : Element is not present in the array!" << endl;     return -1; }
	}
	else 
	{
		int mid = (h+l)/2;
		if (key <=arr[mid]) { return binarySearchRecursive(arr, l, mid, key);   }
		else			    { return binarySearchRecursive(arr, mid+1, h, key); }
	}	
}


int binarySearch(int* arr, int arr_size, int key)
{
	cout << "Binary Search Called for Value : " << key <<endl;

	int pos = binarySearchRecursive(arr, 0, (arr_size-1), key);
	
	cout << endl;
	return pos;
}
