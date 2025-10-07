#include <stdio.h>

int result = 0; // GLOBAL SCOPE (hard to debug)

int add(int x, int y){
  int result = x + y;
  return result;
}

int substract(int x, int y){
  int result = x - y;
  return result;
}

int main(){
  //Variable scope = Where a variable is recognized and accesible.

  int x = 5;
  int y = 6;

  int result = substract(x , y);

  printf("%d", result);

  return 0;
}