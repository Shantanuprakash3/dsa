#include<stdio.h>

int main(){
int n,i;
int num,u,r,l,val,q,qnum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d", &num, &u);
        int arr[num];
        int j,k,h;
        for(j=0;j<num;j++){
            arr[j]=0;
        }
        for(k=0;k<u;k++){
            scanf("%d %d %d", &l,&r,&val);
            for (h=l;h<r;h++){
                arr[h]=arr[h]+val;
            }

        }
        int m;
        scanf("%d",&qnum);
        for(m=0;m<qnum;m++){
            scanf("%d", &q);
            printf("%d",arr[q]);
        }
    }
}