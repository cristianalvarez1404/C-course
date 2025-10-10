#include <stdio.h>

int main(){

  int numbers[] = {10, 20, 30, 40, 50};
  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  char name[] = "Coding";

  numbers[0] = 100;
  numbers[1] = 90;
  numbers[2] = 80;
  numbers[3] = 70;
  numbers[4] = 60;

  int size = sizeof(numbers) / sizeof(numbers[0]);

  for(int i = 0; i < size ; i++){
    printf("%c ", grades[i]);
  }

  printf("%d", sizeof(numbers));

  return 0;
}