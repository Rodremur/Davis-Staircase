/*-------------------------------------------------------
 * Actividad de Programación Avanzada: kata 6 - Davis' Staircase
 * Fecha: 03-11-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
#include <stdio.h>
#include <stdlib.h>
#define MSTEPS 37
int m[MSTEPS];

int steps(int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    if (m[n] != -1) return m[n];
    return m[n] = steps(n-1) + steps(n-2) + steps(n-3);
}

void initialize(int * m)
{
    int i;
    for (i = 0; i < MSTEPS; i++)
        m[i] = -1;
}

int main()
{
    initialize(m);
    int s, r; 
    scanf("%d",&s);
    int a0;
    for(a0 = 0; a0 < s; a0++)
    {
        int n; 
        scanf("%d",&n);
        steps(n);
        printf("%d\n", m[n]);
    }
    return 0;
}