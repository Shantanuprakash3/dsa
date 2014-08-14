#include <iostream>
#include<stdio.h>
int arr[101];
int subset[100001][101];
void isSubsetSum(int n, int sum)
{
    int subsum=0;
 
   
    for (int i = 0; i <= n; i++)
      subset[0][i] = 1;
 
    for (int i = 1; i <= sum; i++)
      subset[i][0] = 0;
 
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= arr[j-1]){
           subset[i][j] = subset[i][j] || subset[i-arr[j-1]][j-1];
       }
       }
     }
     
     for(int k=1; k<=sum; k++){
     	if(subset[k][n]==1){subsum=subsum+k;}
     	else {subsum=subsum;}
     }
     printf("%d\n", subsum);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i,n,j,um;
		scanf("%d",&n);
		
		if(n==1) {
			scanf("%d",&um);
			printf("%d\n", um);
		}
		else
		{
		int sum=0;
		for ( i = 0; i < n; ++i)
		{
			scanf("%d",&arr[i]);
			sum=sum+arr[i];
		}

		isSubsetSum(n, sum);
	}
	}
return 0;
}