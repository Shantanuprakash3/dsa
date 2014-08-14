#include <stdio.h>

char arr[201];
int dp[201][201];
int n;
int max(int a, int b) {return (a > b)? a : b;}

int deepee(int a, int b){
   
   int val[n];
   int i, j,ret;
   int sw=0,so=0;
   
   for(i=a+1; i<=b; i++){
    if (arr[i]=='0')
    {
      so++;
    }
    else sw++;
    if(sw>so){
        ret=max(ret,deepee(a,i-1)+deepee(i,b));
     return dp[a][b]=ret;
    }
 }
}
 
   

int main(void)
{
  int t;
  scanf("%d",&t);
  while(t--){
  
    scanf("%d",&n);
    
    scanf("%s",arr);

    printf("%d\n", deepee(0,n-1));
  }
  return 0;
}