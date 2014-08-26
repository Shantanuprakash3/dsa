#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int num=t-10;
	int tot=0;
	if(num<=0){printf("%d",tot);}

	else if(num==1){printf("%d",tot+4);}
	else if(num>=2 && num <10) {printf("%d",tot+4);}

	else if(num==10){printf("%d",tot+15);}

	else if(num==11){printf("%d",tot+4);}
	else if(num>11 && num<=15){printf("%d",tot);}

	return 0;
}
