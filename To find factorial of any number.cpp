#include <stdio.h>
int main()
{
  int n, i; //initilization of integer
  printf("Enter an integer: "); //shows output to ask user form input
  scanf("%d", &n); //take user's input
  for (i = 1; i <= 10; ++i) // it is forloop use to repeat the statment from 10
  {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}