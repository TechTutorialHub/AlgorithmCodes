//head and tail recursion

public class Algo2 {
    
    //head recursion
    
    public void headRecursion(int height){
        //base case
        if (height == 0) return;
            headRecursion(height -1 );
        System.out.println(height);
                   
    }
    
    //tail recursion
    public void tailRecursion(int height){
        //base case
        if (height == 0) return;
            System.out.println(height);
        tailRecursion(height -1 );
        
                   
    }
}
