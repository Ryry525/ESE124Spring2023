#include <stdio.h>
#include <stdlib.h>

#include "jqueue.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int nratt;
	int k, i, current;
	int count = 0;
	int removed_count = 0;
	int removed[50];

	clear();

	printf("Number of attendants: ");
	scanf("%d", &nratt);

	printf("kth: ");
	scanf("%d", &k);

	for (i = 0; i < nratt; i++)
	{
		add(i + 1);
	}

	while (!is_empty())
	{
		current = _remove();
		count++;

		if (count != k)
			add(current);
		else
		{
			printf("eliminated sequnece %d\n", current);
			removed[removed_count++] = current;
			count = 0;
		}
	}
	printf("Persons Removed: ");
	for (i = 0; i < removed_count; i++)
	{
		printf(" %d", removed[i]);
	}
	printf("\nPerson Survives: %d\n", _remove());

	return 0;
}
