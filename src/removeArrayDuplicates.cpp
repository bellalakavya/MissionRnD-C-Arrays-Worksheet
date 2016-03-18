/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int i, j, count = 0,temp;
	if (Arr && (len>0)){
			for (i = 0; i < len; i++){
				for (j = 0; j < len; j++){
					if (Arr[i]<Arr[j]){
						temp = Arr[j];
						Arr[j] = Arr[i];
						Arr[i] = temp;
					}
				}
			}
			//123333
			int flag = 0;
			for (i = 0; i < len; i++){
				int i1 = i;
				int start = i + 1;
				int k = start;
				flag = 0;
				while (((i + 1)<len) && (Arr[i] == Arr[i + 1])){
					i = i + 1;
					flag = 1;
				}
				if (i + 1 == (len)){
					len = len + k - (i + 1);
					return len;
				}
				if (flag == 1){
					for (int j = i + 1; j < len; j++){
						Arr[start++] = Arr[j];
					}
				}
				len = len + k - (i + 1);
				i = i1;
			}
			return len;
	}
	
	return -1;
}