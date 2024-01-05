#include <stdio.h>
int main() {
	
	int a,b[10000000],temp,c,d,e[10000000];
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d",&temp);
		b[temp] = 1;
	}
	scanf("%d",&c);
	for(int k=1;k<=c;k++){
		scanf("%d",&d);
		if(b[d]==1)
			printf("1 ");
		else
			printf("0 ");	
	}
	
	
}
