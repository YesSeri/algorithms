import graph.Graph;
import graph.GraphTraversal;

public class Main {
    public static void main(String[] args) {

        Graph g = Graph.createGraph();
        System.out.println(g.printGraph());
        var r = GraphTraversal.breadthFirstTraversal(g, "Bob");
        System.out.println(r);
    }

}