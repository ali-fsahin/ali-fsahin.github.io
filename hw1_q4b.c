#include <stdio.h>


void computeHomevalue ()
{
   int popularity, size;
   int homeValue;
   
   printf("What is the size of the neighbourhood?: ");
   scanf("%d", &size);
   
   printf("\nWhat is the popularity of the neighbourhood?: ");
   scanf("%d", &popularity);
   
   homeValue = (((size * size) + (popularity * popularity * popularity)) * 10000);
   
   printf("\nPrice for this property is %d liras.", homeValue);
}
 
  int main ()
  {
      computeHomevalue ();
      return 0;
  }