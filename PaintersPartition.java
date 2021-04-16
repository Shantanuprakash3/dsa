/*

We have to paint n boards of length {A1, A2, .. An}. There are k painters available and each takes 1 unit time to paint 1 unit of board. 
The problem is to find the minimum time to get this job done under the constraints that any painter will only paint continuous sections of boards, say board {1, 2, 3} or only board {1} or nothing but not board {1, 3, 4}.

Examples :

Input : k = 2, A = {10, 10, 10, 10} 
Output : 20.
Here we can divide the boards into 2
equal sized partitions, so each painter

Input : k = 2, A = {10, 20, 30, 40} 
Output : 60.
Here we can divide first 3 boards for
one painter and the last board for 
second painter.

Input : k = 4, A = {10, 20, 30, 40} 
Output: 40

Input : k = 2, A = {100, 40, 110, 70}
Output: 180

Input : k = 3, A = {100, 40, 110, 70}
Output: 140

*/


public class PaintersPartition{
    public static void main(String[] args){
        int k = 3;
        int[] A = {100, 40, 110, 70};
        System.out.println(partition(k,A));
        
    }
    public static int getMax(int [] A, int n){
        int max = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(A[i] > max){
                max = A[i];
            }
        }
        return max;
    }
    public static int getTotal(int[] A, int n){
        int total = 0;
        for(int i = 0; i<n;i++){
            total += A[i];
        }
        return total;
    }
    public static int getPartitions(int [] A, int n, int max){
        int tot = 0;
        int partitions = 1;
        for(int i=0;i<n;i++){
            tot += A[i];
            if(tot > max){
                tot = A[i];
                partitions++;
            }
        }
        return partitions;
    }
    public static int partition(int k, int[] A){
        int n= A.length;
        int low = getMax(A,n);
        int high = getTotal(A,n);

        while(low < high){
            int mid = (low + high)/2;
            int rqd_partitions = getPartitions(A, n, mid);
            if(rqd_partitions <= k){
                high = mid;
            } else {
                low = mid+1;
            }
        }
        return low;
    }
}
