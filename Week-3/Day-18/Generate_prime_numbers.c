/*Generate prime numbers. Day-18 Task-1*/
#include <stdio.h>
int is_prime(int num) 
{
 	int i;
 // This function checks if a number is prime.
 // Args:
    //num: The number to check.
  //Returns:
      //1 if the number is prime, 0 otherwise.
  if (num <= 1) 
  {
    return 0; // 0 and 1 are not prime
  }
  for (i = 2; i * i <= num; i++) 
  {
    if (num % i == 0) 
	{
      return 0; // If a number is divisible by any number other than 1 and itself, it's not prime
    }
  }
  return 1; // If the loop completes without finding any divisors, the number is prime
}

void generate_primes(int n) 
{
  //This function generates the first N prime numbers and prints them.
  //Args:
      //n: The number of prime numbers to generate.
  int count = 0;
  int num = 2;
  while (count < n) 
  {
    if (is_prime(num))
    {
		printf("%d ", num);
      count++;
    }
    num++;
  }
}
int main() 
{
  int n;
  printf("Enter the number of prime numbers to generate: ");
  scanf("%d", &n);

  generate_primes(n);

  return 0;
}

