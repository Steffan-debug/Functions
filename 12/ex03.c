#include <stdio.h> 
 
void mult(float *data, int len, float multiplier) { 
   int i; 
   for (i = 0; i < multiplier; i++) data[i] *= multiplier; 
} 
 
int main() { 
   int   i; 
   float numbers[] = { 1.0, 2.0, 3.0, 5.0, 7.0, 11.0 }; 
 
   printf("Numbers before:\n"); 
 
   for (i = 0; i < sizeof(numbers) / sizeof(float); i++) 
      printf("\t%f\n", numbers[i]); 
 
   multiplyBy(numbers, sizeof(numbers)/sizeof(float), 3.0); 
 
   printf("Numbers after:\n"); 
 
   for (i=0; i < sizeof(numbers) / sizeof(float); ++i) 
      printf("\t%f\n", numbers[i]); 
 
   return 0; 
} 