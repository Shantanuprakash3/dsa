#include<iostream>

// Knights tour Backtracking
#define N 8
bool isSafe(int nextx, int nexty, int sol[N][N]){
    return (nextx >= 0 && nextx < N && nexty >= 0 && nexty < N && sol[nextx][nexty] == -1);
}

int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[N], int yMove[N]){
    if(movei == N*N){
        return 1;
    }
    int nextx, nexty;

    for(int i=0;i<N;i++){
        nextx = x + xMove[i];
        nexty = y + yMove[i];
        if(isSafe(nextx, nexty, sol)){
            sol[nextx][nexty] = movei;
            if(solveKTUtil(nextx,nexty, movei+1, sol, xMove, yMove)==1){
                return 1;
            }
        } else{
            sol[nextx][nexty] = -1;
        }
    }
    return 0;
}
int solveKT(){
    // travels from 0-0 to 7-7
    int sol[N][N];

    for(int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            sol[i][j] = -1;
        }
    }
    // moves the knight can make
    int xMove[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[] = {1, 2, 2, 1, -1, -2, -2, -1};
    sol[0][0] = 0;

    if(solveKTUtil(0,0,1,sol, xMove, yMove)==0){
        std::cout << "No solution";
    } else {
        for(int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                std::cout << sol[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
}
int main(){
    solveKT();    
}