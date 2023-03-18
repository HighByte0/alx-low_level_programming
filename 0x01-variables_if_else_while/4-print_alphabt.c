#include <stdio.h>

/**
 * main - print alphabet .
 * return: always 0 (success)
 * */
int main (void){
         int i;
         for (i=97 ;i<123 ;i++)
         {
		 if (i !=101 && i != 113)
		 {
                 putchar(alpha[i]);
		 }
         }
	 putchar('\n');
	 return (0);
}


