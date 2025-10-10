#include <stdio.h>
#include <stdbool.h>

int main(){
  //ternary operator ? = Shorthand for if-else statments

  // int x = 5;
  // int y = 6;
  // int max = (x > y) ? x : y;

  // printf("%d", max);

  // bool isOnline = true;

  // printf("%s", (isOnline) ? "online" : "offline");

  // int number = 8;

  // printf("%d is %s", number, (number % 2 == 0 ? "even" : "odd"));

  // int age = 21;

  // printf("%s", (age > 18) ? "adult" : "child");

  int hours = 11;
  int minutes = 3;
  char *meridiem =  (hours < 12) ? "AM" : "PM";

  printf("%02d:%02d %s", hours, minutes, meridiem);

  return 0;
}