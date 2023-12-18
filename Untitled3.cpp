#include<stdio.h>
#include<math.h>
int main() {
float len,bred,area,peri,diag;

printf("enter len");
scanf("%f",&len);
printf("enter bred");
scanf("%f",&bred);	
	
//area of rectangle
printf("area of rectangle is%f",len*bred);
	
//perimeter of rectangle
printf("peri of rectangle is%f",2*len + 2*bred);	
	
//diagonal of rectangle
printf("diag of rectangle is%f",sqrt(len*len + bred*bred));	
	
return 0;	
	
	
	
}
