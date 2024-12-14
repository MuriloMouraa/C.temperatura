#include <stdio.h>
int main(){

double temp;
  char esc1, esc2;

printf("Digite a temperatura:\n");
  
scanf("%lf", &temp);

  printf("Digite a escala da temperatura atual:\n");

  scanf(" %c", &esc1);

  printf("Digite a escala que deseja converter:\n");

  scanf(" %c", &esc2);

  if (esc1 == 'C' && esc2 == 'F'){
  printf("%.2f\n", ((temp * 9/5) + 32));
  }
  else if (esc1 == 'C' && esc2 == 'K'){
  printf("%.2f\n", (temp + 273.15));
  }
  else if (esc1 == 'F' && esc2 == 'C'){
  printf("%.2f\n", ((temp - 32) * 5/9));
}
  else if (esc1 == 'F' && esc2 == 'K'){
  printf("%.2f\n", ((temp - 32) * 5/9 + 273.15));
  }
  else if (esc1 == 'K' && esc2 == 'C'){
  printf("%.2f\n", (temp - 273.15));
}
  else if (esc1 == 'K' && esc2 == 'F'){
  printf("%.2f\n", ((temp - 273.15) * 9/5 - 32));
}
  else{
  printf("Escala Invalida\n");
  }
  return 0;
}