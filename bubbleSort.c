// 
// bubbleSort.c
// 03 Aug 17
// jarrod li
// sorts an array 
//

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
	int sorted = TRUE;
	int s = argc - 1; 
	int arr[100];
	
	for (int i = 1; i < argc; i++) {
		arr[i] = atoi(argv[i]);
	}
	do {
		for (int i = 0; i < s; i++) {
 			if (arr[i] > arr[i+1]) {
				int x = arr[i];
				arr[i] = arr[i+1];		
				arr[i+1] = x;
				sorted = FALSE;
			}
		}	
	} while (!sorted);

	for (int i = 0; i < s; i++) {
		printf("%d, ", arr[i]);	
	}
	return EXIT_SUCCESS; 
}
