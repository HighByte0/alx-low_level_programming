#include <stdio.h>

/**
 * main - print alphabet .
 * return: always 0 (success)
 * */
int main (void){
	char alpha[26]="qwertyuiopasdfghjklzxcvbnm";
	 int i;
	 for (i=0 ;i<26 ;i++)
	 {
		 putchar(alpha[i]);
	 }
putchar('\n');
return (0);
}
