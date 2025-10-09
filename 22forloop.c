#include <stdio.h>
#include <windows.h>

int main(){
  /* 
  for( int i = 0; i < 10 ; i++ ){
    Sleep(1000);
    printf("%d\n", i);
  }
  */

  /*
  for(int i = 1; i <= 10; i++){
    if(i == 4){
      break;
    }

    if(i == 3) {
      continue;
    }
    printf("%d\n", i);
  }
  */

  for(int i = 1; i <= 10; i++){
    for(int j = 1; j <= 10; j++){
      printf("%3d ", i * j);
    }
    printf("\n");     
  }


  int rows = 0;
  int columns = 0;
  char symbol = '\0';
  
  printf("Enter the # of rows: ");
  scanf("%d", &rows);

  printf("Enter the # of columns: ");
  scanf("%d", &columns);

  printf("Enter the character: ");
  scanf(" %c", &symbol);

  for(int row = 0; row <= rows; row++ ){  
    for(int column = 0; column <= columns; column++ ){
      printf("%c", symbol);
    }
    printf("\n");
  }

  return 0;
}