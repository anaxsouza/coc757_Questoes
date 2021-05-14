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
    for ( i=0; i<n; i++ )
    for ( j=0; j<n; j++ )
    {
     b[ i ][ 1 ] = b[i][1] + matriz[i][j]*x[j][1];
    }
    printf("%d\n",n);
    }
    return 0;
}