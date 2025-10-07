#include <stdio.h>
#include <stdbool.h>

int getMax(int x, int y){
  return x >= y ? x : y;
}

bool ageCheck(int age){
  return age >= 18;
}

double cube(double num){
  return num * num * num;
}

double square(double num){
  return num * num;
}

int main(){
  // return = returns a value back to where you call a function

  double x = cube(2);
  double y = cube(3);
  double z = cube(4);
  int age = 21;
  int max = getMax(2,3);

  printf("%d\n",max);

  if(ageCheck(age)){
    printf("You may sign up\n");
  } 
  else {
    printf("You must be 18+ to sign up\n");
  }

  printf("%lf\n", x);
  printf("%lf\n", y);
  printf("%lf\n", z);

  return 0;
}