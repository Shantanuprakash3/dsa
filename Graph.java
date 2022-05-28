class Vertex {
    public char label;
    public boolean visited;
    public Vertex(char lab){
        label = lab;
        visited = false;
    }
}

class Graph {
    private final int maxVertices =  20;
    private Vertex vertexList[];
    private int adjMatrix[][];
    private int vertexCount;
    private Stack theStack;
    private Queue theQueue;

    public Graph(){
        vertexList = new Vertex[maxVertices];
        adjMatrix = new int[maxVertices][maxVertices];
        vertexCount = 0;
        for(int y = 0; y < maxVertices; y++)
            for(int x = 0; x < maxVertices; x++)
                adjMatrix[x][y] = 0;
        theStack = new Stack();
        theQueue = new Queue();
    }
    public void addVertex(char lab){
        vertexList[vertexCount++] = new Vertex(lab);
    }
    public void addEdge(int source, int destination){
        adjMatrix[source][destination] = 1;
        adjMatrix[destination][source] = 1;
    }
    public void displayVertex(int v){
        System.out.println(vertexList[v].label);
    }
    public void dfs(){
        vertexList[0].visited = true;
        while(){

        }
    }
}