#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void u_itoa(int n,char s[]) ;

int main()
{
	int i = -2147483648;
	char data[40] ;
	
  printf("%d\n",i);  //输出，确认数字正确性
	u_itoa( i , data);
	
  return 0;
}

void u_itoa(int n,char s[]) 
{
	int i;
	unsigned int sign;
  
  
	if( n < 0)
		sign = -n;
	else 
		sign = n;
    
	i = 0;
	do{
		s[i++] = sign % 10 + '0' ;
	}while( ( sign /= 10) > 0);
	if ( n < 0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';
	
	for( ; i >=0 ; i--)
		putchar( s[i]);
    /* 偷了个懒直接输出 */
}
