#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
     
  int answer = 59;
  int num;
  int trial=0;
  
  do     //답을 못 맞춘 상황에서 도는 것 => while문 안에 답이  맞지 않은 경우로 식 설정 해야됨. 
  {
      printf("Input a numebr:");
      scanf("%d", &num);
      
      if(answer < num)
          printf("high!\n");
      else if(answer > num)
           printf("low!\n");
           
      trial++;
  }
  while(answer != num);
  
  printf("Congratulation! trial:%i\n", trial); 
       
       
  system("PAUSE");	
  return 0;
}
