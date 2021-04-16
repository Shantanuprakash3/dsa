public class NQueens {
    final static int N = 8;
    static boolean isSafe(int row, int col, int[][] board){

        int i, j;
        for(j=0; j<col;j++){
            if(board[row][j] == 1){
                return false;
            }
        }

        for(i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j] == 1){
                return false;
            }
        }

        for(i=row,j=col;i<N && j>=0;i++,j--){
            if(board[i][j] == 1){
                return false;
            }
        }
        return true;
    }
    boolean solveNQueens(){
        int[][] board  = new int[N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                board[i][j] = 0;
            }
        }
        //board[][]
        if(nQueensUtil(board, 0)==true){
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    System.out.println(board[i][j]);
                }
            }
            return true;
        }
        // for(int i=0;i<N;i++){
        //     for(int j=0;j<N;j++){
        //         System.out.println(board[i][j]);
        //     }
        // }
        return false;
    }

    boolean nQueensUtil(int[][] board, int col){
        if(col >= N){
            return true;
        }
        for(int i=0;i<N;i++){
            if(isSafe(i, col, board) == true){
                board[i][col] = 1;
                if(nQueensUtil(board, col+1)==true){
                    return true;
                }
                board[i][col] = 0;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        NQueens nq = new NQueens();
        System.out.println(nq.solveNQueens());
        //print the board
    }
}