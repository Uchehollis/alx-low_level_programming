#include <stdlib.h>
#include "main.h"

/**
 * Allocates memory using malloc
 *
 * @param b The number of bytes to allocate
 *
 * @return A pointer to the allocated memory
 *         If malloc fails, the function terminates the process with a
 *         status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL) /*check if malloc failed*/
		exit(98); /*terminate the process with status 98*/

	return (ptr);
}
