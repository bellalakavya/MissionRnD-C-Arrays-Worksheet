/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i, count = 0, temp, temp1;
	if (Arr&&len>0)
	{
		Arr = (int*)realloc(Arr, sizeof(int)*len + 1);
		for (i = 0; i<len; i++)
		{
			count++;
			if (Arr[i] >= num)
			{
				temp = Arr[i];
				Arr[i] = num;
				break;
			}
		}
		if (count == len)
		{
			Arr[len] = num;
			return Arr;
		}
		for (i = count; i < len + 1; i++){
			temp1 = Arr[i];
			Arr[i] = temp;
			temp = temp1;
		}


		return Arr;
	}


	else{
		return NULL;
	}

}