//Volume and surface area of a cylinder
#include<stdio.h>

int main(){
	int radius,height,volume,surfacearea;
	
	//prompt the user
	printf("Enter the the radius");
	scanf("%d",&radius);
	
	printf("Enter the height");
	scanf("%d",&height);
	
	volume=3.142*radius*radius*'height';
	surfacearea=2*3.*radius*radius+2*3.142*radius*height;
	
	printf("volume=%d\n",volume);
	printf("surface area=%d\n",surfacearea);
	
	return 0;
	
}
	