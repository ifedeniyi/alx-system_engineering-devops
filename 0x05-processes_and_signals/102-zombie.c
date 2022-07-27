#include <unistd.h>
#include <stdio.h>

int infinite_while(void);

/**
 * main - Entry point, forks 5 new child processes
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	if (fork() == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
	}
	else
	{
		if (fork() == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
		}
		else
		{
			if (fork() == 0)
			{
				printf("Zombie process created, PID: %d\n", getpid());
			}
			else
			{
				if (fork() == 0)
				{
					printf("Zombie process created, PID: %d\n", getpid());
				}
				else
				{
					if (fork() == 0)
					{
						printf("Zombie process created, PID: %d\n", getpid());
					}
					else
					{
						infinite_while();
					}
				}
			}
		}
	}
}

/**
 * infinite_while - infinite while loop
 * Return: Always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
