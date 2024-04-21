#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


/**
 * main - Entry point.
 * Return: EXIT_SUCCESS.
 */

int main(void)
{
	char n = 0;
	pid_t my_pid;


	while (n < 5)
	{
		my_pid = fork();

		if (my_pid > 0)
		{
			printf("Zombie process created, PID: %d\n", my_pid);
			sleep(1);
			n++;
		}
		else
		{
			exit(0);
		}
	}

	infinity();

	return (EXIT_SUCCESS);
}


/**
 * infinity - Sleep to death.
 */

void infinity(void)
{
	while (1)
	{
		sleep(1);
	}
}
