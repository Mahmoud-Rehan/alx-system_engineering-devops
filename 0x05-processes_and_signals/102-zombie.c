#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


/**
 * infinite_while - loop to death.
 *
 * Return: Always 0.
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}


/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t my_pid;
	char n = 0;

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
