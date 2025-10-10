#include <stdio.h>

int main(){
  /*
  int scores[5] = {0};
  
  for(int i = 0; i < 5 ; i++){
    printf("Enter a score: ");
    scanf("%d", &scores[i]);
  }

  for(int i = 0; i < 5; i++){
    printf("%d ", scores[i]);
  }
  */

  //2D array = An array where each element is an array
  //array[][] = {{},{}};

  /*
  int numbers[][3] = {  {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},
                        {10, 11, 12}
                    };

  for(int i = 0; i < 4; i++ ){
    for(int j = 0; j < 3 ; j++){
      printf("%3d", numbers[i][j]);
    }
    printf("\n");
  }
  */

  /*
  printf("%d", numbers[0][0]);
  printf("%d", numbers[0][1]);
  printf("%d\n", numbers[0][2]);
  
  printf("%d", numbers[1][0]);
  printf("%d", numbers[1][1]);
  printf("%d\n", numbers[1][2]);
  
  printf("%d", numbers[2][0]);
  printf("%d", numbers[2][1]);
  printf("%d\n", numbers[2][2]);
  */

  // Array of Strings

  char fruit[][10] = {
                        "Apple", 
                        "Banana", 
                        "Coconut"
                      };
  int size = sizeof(fruit) / sizeof(fruit[0]);

  fruit[0][0] = 'B';
  
  for(int i = 0; i < size; i++){
    printf("%s\n", fruit[i]);
  }


  return 0;
}