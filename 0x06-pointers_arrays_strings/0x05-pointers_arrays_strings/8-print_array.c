#include "main.h"
#include <stio.h>
/**
*print_arry - prints n elements of an array of intergers.
*@a: pointer to array.
*@n: number of arry elements.
*
* Return: void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d" , a[i]);
if (i != n -1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}
