#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  */
   int integer2; /* second number to be input by user */
   int x;      /* variable in which sum will be stored */ 
  
   printf("Enter first integer: "); /* prompt */
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "\nEnter second integer: "); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   x = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", x ); /* print sum */
   return 0; /* indicate that program ended successfully */
}
