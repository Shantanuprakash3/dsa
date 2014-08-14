#include<stdio.h>
#include<math.h>

int main(){
	int i,j;
	scanf("%d", &i);
	for(j=0;j<i;j++){
		int n,k;
		scanf("%d %d", &n, &k);
		char ch = recurtms(n,k);
	}
return 0;
}

char recurtms(int n, int k){
	int j = pow(2,n-1);
	char arr[j];
	arr[0]='M';
	recur(arr);
}
