#include <unistd.h>
#include <stdio.h>

int infinite_while(void);

/**
 * Main - Entry point
 * Return - Always 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		pid_t zombie = fork();

		if (zombie == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			return (0);
		}
	}
	infinite_while();
}

/**
 * infinite_while - infinite while loop
 * Return - Always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
