#include<stdio.h>  

int addition(int n)  
{  
  if (n == 0) 
  {
    return 1;  
  }
  else  
    return(n + addition(n-1));  
}  
  
int main()  
{  
  int number;  
  int add;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
  add = addition(number);  
  printf("Adition of %d is %d\n", number, add-1);
}
