//Head and Tail recursion

public class App2 {
    public static void main(String[] args) {
        Algo2 algo2 = new Algo2();
        //head recursion
        System.out.println("Head recursion");
        algo2.headRecursion(4);
        //similar to iteration
        System.out.println("Tail recursion");
        algo2.tailRecursion(4);
    }
}

