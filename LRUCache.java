import java.util.Deque;
import java.util.HashSet;
import java.util.LinkedList;

public class LRUCache{
    private Deque<Integer> doublyQueue;
    private HashSet<Integer> hashSet;
    private final int CACHE_SIZE;

    LRUCache(int capacity){
        doublyQueue = new LinkedList<Integer>();
        hashSet = new HashSet<>();
        CACHE_SIZE = capacity;
    }

    public void refer(int page){
        if(!hashSet.contains(page)){
            if(doublyQueue.size()==CACHE_SIZE){
                int last = doublyQueue.removeLast();
                hashSet.remove(last);
            }
        } else {
            doublyQueue.remove(page);
        }
        doublyQueue.push(page);
        hashSet.add(page);
    }
    public static void main(String[] args) {
        LRUCache c = new LRUCache(5);
        c.refer(1);
        c.refer(2);
        c.refer(3);
        c.refer(4);
        c.refer(1);
        c.refer(2);    
    }
}