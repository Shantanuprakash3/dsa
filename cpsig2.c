#include<stdio.h>
int min3(int a, int b, int c){return min(min(a,b),c);}
int min(int a, int b){if(a<b) return a; else return b;}

int main(){
	int n,k,l,c,d,p,nl,np;
	scanf("%d %d %d %d %d %d %d %d",&n, &k, &l, &c, &d, &p, &nl, &np);

	int totdrin=k*l;

	int drinkeach=totdrin/nl;

	int totslices=c*d;

	int sal=p/np;

	printf("%d",min3(sal,totslices,drinkeach)/n);
	return 0;
}
