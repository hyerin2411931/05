#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
     
  int x;
  int i;   //for�� ������ ���� ���� 
  int sum = 0;
  printf("Input an number: ");
  scanf("%d", &x);
  
  for(i= 1; i <= x ; i ++)
        sum = sum + i;     //for�� �ȿ��� i�� ���� ��. x ����.. => x ���� �� �Է¹��� x�� x�� ���ϰ� �Ǵ� ���� ��. 
        
  printf("The result is %i.\n", sum); 
       
  system("PAUSE");	
  return 0;
}
