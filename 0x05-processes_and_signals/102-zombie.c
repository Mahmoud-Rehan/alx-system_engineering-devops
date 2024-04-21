#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int infinite_while(void);


/**
 * main - Entry point.
 *
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

	infinite_while();

	return (EXIT_SUCCESS);
}


/**
 * infinite_while - Sleep to death.
 *
 * Return: 0 Always.
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
