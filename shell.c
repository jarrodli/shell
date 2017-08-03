// 
// shell.c
// jarrod li
// 02 August 2017
// inspecting os 
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define N 5

void create(char *t) {
        for (int i = 0; i < N; i++) {
		sleep(rand() % 3);
		printf("process %d for %s\n", i, t);	
	}	
}

int main(int argc, char *argv[]) {
	
	pid_t pid = fork();
	srand((int) pid);	
	
	if (pid < 0) {
		perror("fork failed");
		exit(1);
	} 
	if (pid == 0) {
		printf("child process init...\n");
		char *args[] = { "./bubbleSort", 
				"0", "1", "3", "2", NULL };
		execv(args[0], args);
		exit(0);
	}

	printf("completing parent tasks...\n");

	create("parent");

	wait(NULL);

	return 0;
}
