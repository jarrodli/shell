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

int main(int argc, char *argv[]) {
	pid_t pid = fork();
	if (pid < 0) {
		perror("fork failed");
	} 
	if (pid == 0) {
		printf("child process completing tasks...");
	}
	
	printf("completing parent tasks...");
	wait(NULL);
	printf("parent task completed");
}
