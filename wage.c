
#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int r,c,n;
        scanf("%d %d %d",&r,&c,&n);

        char mat[101][101];
        char sol[101][101];

        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                scanf("%c",mat[i][j]);
                sol[i][j]=mat[i][j];
            }
            
        }
        while(n--){
            
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if(mat[i][j]=='W'){
                    if(sol[i+1][j]=='G' || sol[i-1][j]=='G' || sol[i][j+1]=='G' || sol[i][j-1]=='G') {mat[i][j]='G';}
                }
            else if(mat[i][j]=='A'){
                    if(sol[i+1][j]=='W' || sol[i-1][j]=='W' || sol[i][j+1]=='W' || sol[i][j-1]=='W') {mat[i][j]='W';}
                }
             else if(mat[i][j]=='G'){
                    if(sol[i+1][j]=='A' || sol[i-1][j]=='A' || sol[i][j+1]=='A' || sol[i][j-1]=='A') {mat[i][j]='A';}
                }
            
            }
            
        }
for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                sol[i][j]=mat[i][j];
            }
            
        }

}

        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                printf("%c",mat[i][j]);
            }
            printf("\n");
        }


    }
    return 0;
}
