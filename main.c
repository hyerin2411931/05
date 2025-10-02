#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
     
  int x, y;
  char z;
  int result;
  
  printf("enter the calculation :");
  scanf("%i%c%i", &x, &z, &y);
  
  printf("%i %c %i\n", x, z, y);
  

  if(z == '+')
       result = x+y;
  else if(z == '-')
       result = x-y ;
  else if (z == '*')
       result = x*y;
  else
      result = x/y; 
  
  printf("the result is %i.\n", result); 
      
  //switch문 사용 가능 -> case/default 나눠서 
       
       
  system("PAUSE");	
  return 0;
}
