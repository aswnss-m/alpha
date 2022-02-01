/* Linear Search in an array
 * Autho : Aswin Lal M
 * Roll no : 320
 *Experinment no : xx
 */

#include <stdio.h>
int main()
{
	int n, target, pos = -1, i;

	// Getting the elements in the array
	printf("Enter the value of n : ");
	scanf("%d", &n);
	int array[n]
	printf("Enter the elements in the array\n");
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &array[i]);
	}

	//Getting the target
	printf("Enter the item to search : ");
	scanf("%d", &target);

	//linear search
	for (i = 0; i < n; i++)
	{
		if (array[i] == target)
		{
			pos = i;
			break;
		}
	}

	//Returning the position
	if (pos != -1)
	{
		printf("item found at postion %d \n", pos + 1);
	}
	else
	{
		printf("item not found! \n");
	}
	return (0);
}
