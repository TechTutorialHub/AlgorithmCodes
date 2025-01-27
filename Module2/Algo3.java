//factorial
public class Algo3 {
    //recursive
    public int factorial (int n){
        //4! = 4*3*2*1
        //n! = n*(n-1)*(n-2)*..*1
        
        //base case
        if (n==1)return 1;
            return n * factorial(n-1);
    }
    
    public int factorial_accumulator(int accumulator, int n){
        //base case
        //do not store variable to the stack
        if (n==1)return accumulator;
            return factorial_accumulator(accumulator * n, n-1);
    
    }
    
    public int calculateFactorial (int n){
        return factorial_accumulator(1,n);
    }
}
