#include<stdio.h>
int main(){
	int a,b,c;
	printf("entrer le 1er nbr:");
	scanf("%d",&a);
	printf("entrer le 2eme nbr:");
	scanf("%d",&b);
	printf("les nombres avant echange sont %d et %d ",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n les nombres apres echange sont %d et %d",a,b);
	
}
