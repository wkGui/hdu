#include<stdio.h>

int main(){
  float f;
  while(scanf("%f", &f)!=EOF){
    printf("%.2f\n", 5.0/9*(f-32));
  }
  return 0;
}
