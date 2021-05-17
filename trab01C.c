#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    for(n=1; n<10^9; n++)
    {
    int i, j;
    double matriz[n][n], x[n][1], b[n][1], tempoxn[507][2];
    srand(time(NULL));
    for ( i=0; i<n; i++ )
    for ( j=0; j<n; j++ )
    {
      matriz[ i ][ j ] = rand();
    }
    for ( i=0; i<n; i++ )
    {
      x[ i ][ 1 ] = rand();
    }
    clock_t inicio = clock();
    for ( i=0; i<n; i++ )
    for ( j=0; j<n; j++ )
    {
     b[ i ][ 1 ] = b[i][1] + matriz[i][j]*x[j][1];
    }
    clock_t fim = clock();
    double tempo = ((double)(fim-inicio))/(CLOCKS_PER_SEC/1000);
    double inicioo = ((double)(inicio))/(CLOCKS_PER_SEC/1000);
    double fimm = ((double)(fim))/(CLOCKS_PER_SEC/1000);
    printf("%d  %lf  %lf  %lf\n",n,inicioo,fimm,tempo);
    }
    return 0;
}