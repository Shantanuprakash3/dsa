#include<stdio.h>

int min(int a, int b) { return (a < b)? a : b; }
 
void knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = min(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   printf("The minimum amount of money in the piggy-bank is %d.\n",K[n][W]);
}
int main(){
	int i,t;
	scanf("%d",&t);
	int e,f,n;
	int coinwt;
 	while(t--){
       scanf("%d %d",&e,&f);
       coinwt=f-e;
       scanf("%d",&n);
       int p[n];
       int w[n];
       int wtsum=0;
       for(i=0;i<n;i++){
       		scanf("%d %d",&p[i],&w[i]);
       }
       knapSack(coinwt,w,p,n));
 else{printf("This is impossible.\n");}
	}
}