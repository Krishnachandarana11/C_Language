#include <stdio.h>

int main() 
{

  int n, rev=0,rem;

  printf("Enter an integer: ");
  scanf("%d", &n);
  
  if (n<100 || n>999)
	 {
        printf("Please enter a valid 3-digit number.\n");
        
    }

  while(n != 0)
   	{
    rem= n % 10;
    rev = rev * 10 + rem;
    n /= 10;
	}

  printf("Reversed number = %d", rev);
}



