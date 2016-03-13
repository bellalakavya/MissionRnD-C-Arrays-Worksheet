/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, temp, j = len - 1, m, count = 0;
	if (Arr&&len > 0){
		for (m = 0; m < len; m++){
			for (i = 0; i < j; i++){
				if (Arr[i]>Arr[j]){
					count++;
					temp = Arr[j];
					Arr[j] = Arr[i];
					Arr[i] = temp;
					break;
				}
			}
			if (count == 1){
				break;
			}
			if (j != 0){
				j--;
			}
		}
	}
	else{
		return NULL;
	}
}