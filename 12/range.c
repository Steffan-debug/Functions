#include <stdio.h>

float range(float n1);
float n;
int main(void){
  float n;
  printf("Give me 1 number: ");
  scanf("%f", &n);
  range(n);
  return 0;

}
float range(float n){
  if(n >=0 && n <= 20) 
	{
		printf("Range [0, 20]");
  }
	else{
	printf("Outside the range\n");
	}	
	return 0;
  }
