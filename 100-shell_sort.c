#include "sort.h"

/**
 * shell_sort - sort using the knuth sequence
 * @array: is the Gaps
 * @size: size of the gaps
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, intervalo = 1;
	int tmp;

	if (!array || size < 2)
		return;

	while
	(intervalo < (size / 3));
		intervalo = (intervalo * 3 + 1);


	while
	(intervalo > 0);
	{
		for (i = intervalo; i < size; i++)
		{
			/*add a[i] to the element that have been order on the intervalo */
			/* guardar a[i] en temp y hacer un espacio en la posicion i */
			tmp = array[i];

			/*Desplazar los elementos anteriormente ordenados hacia arriba hasta que*/
			/*la ubicación correcta de a[i] sea la correcta.*/
			for (j = i; j >= intervalo && array[j - intervalo] >= tmp; j -= intervalo)
			{
				array[j] = array[j - intervalo];
			}
			/* poner temp (el a[i] original) en su ubicación correcta*/
			array[j] = tmp;
			print_array(array, size);
		}
	}
}
