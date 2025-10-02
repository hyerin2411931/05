#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
     
  int x;
  int i;   //for문 돌리기 위한 변수 
  int sum = 0;
  printf("Input an number: ");
  scanf("%d", &x);
  
  for(i= 1; i <= x ; i ++)
        sum = sum + i;     //for문 안에는 i가 들어가야 함. x 말고.. => x 들어가면 걍 입력받은 x를 x번 더하게 되는 식이 됨. 
        
  printf("The result is %i.\n", sum); 
       
  system("PAUSE");	
  return 0;
}
