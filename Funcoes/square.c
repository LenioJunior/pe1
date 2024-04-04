#include <stdio.h>

int square( int );   /* function prototype */

int main()
{
    int x;
    
    for ( x = 1; x <= 10; x++ )
        printf( "%d  ", square( x ) );
    
    printf( "\n" );
    
    return 0;
}

/* Function definition */
int square( int y )
{
    return y * y;
}
