#include <stdio.h>

int main(void) {
float a,b;
int i ;
printf("M e n u");
printf("\n1.Add(+)\n2. Subtract (-)\n3. Multiply (*)\n4. Divide (/)\n5. Modulo (%)\n");
printf("Enter Number 1:");
scanf("%f",&a);
printf("Enter Number 2:");
scanf("%f",&b);
printf("Select choice:");
scanf("%d",&i);
switch(i){
  case 1 :
  printf("%.3f",a+b);
  break;
  case 2 :
  printf("%.3f",a-b);
  break;
  case 3 :
  printf ("%.3f",a*b);
  break;
  case 4 :
  if(b==0){
    printf("Devide by zero");
  }
else
printf("%.3f",a/b);
break;
case 5 :
if (b==0){
  printf("Devide by Zero");
}
else
printf("Answer is %.3f Mod %.3f = %d",a,b, (int)a%(int)b);
}
return 0 ;
}