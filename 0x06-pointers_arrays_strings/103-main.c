#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{

char *n1 = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
char *n2 = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
char r[100];
char r2[10];
char r3[11];
char *res;
res = infinite_add(n1, n2, r, 100);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n1, n2, res);
}
n1 = "1234567890";
n2 = "1";
res = infinite_add(n1, n2, r2, 10);
if (res == 0)
{
printf("Error\n");
}
else
{printf("%s + %s = %s\n", n1, n2, res);
}
n1 = "999999999";
n2 = "1";
res = infinite_add(n1, n2, r2, 10);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n1, n2, res);
}
res = infinite_add(n1, n2, r3, 11);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n1, n2, res);
}
return (0);

}
