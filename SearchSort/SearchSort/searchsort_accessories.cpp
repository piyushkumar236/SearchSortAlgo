#include "stdafx.h"
void swap(int* pval1, int* pval2) 
{
	*pval1 = (*pval1)^(*pval2);
	*pval2 = (*pval1)^(*pval2);
	*pval1 = (*pval1)^(*pval2);
}
