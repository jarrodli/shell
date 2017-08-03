// 
// bubbleSort.c
// 03 Aug 17
// jarrod li
// sorts an array 
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
	//int s = argc; 
	int arr[100];
	int sorted = TRUE;	
	
	for (int i = 0; i < argc; i++) {
		arr[i] = atoi(argv[i]);
	}
	
	do {
		sorted = TRUE;
		for (int i = 0; i < argc - 1; i++) {
 			if (arr[i] > arr[i+1]) {
				int x = arr[i];
				arr[i] = arr[i+1];		
				arr[i+1] = x;
				sorted = FALSE;
			}
		}	
	} while (!sorted);

	for (int i = 0; i < argc; i++) {
		printf("%d, ", arr[i]);	
	}
	printf("\n");

	return EXIT_SUCCESS; 
}
